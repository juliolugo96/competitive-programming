/**
 * @file sopa.cpp
 * @author Julio Lugo (juliol@prettytechnical.io)
 * @brief
 * @version 0.1
 * @date 2023-04-13
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define HORIZONTAL 0
#define VERTICAL 1
#define DIAGONAL 2
#define INVERTED_HORIZONTAL 3
#define INVERTED_VERTICAL 4
#define INVERTED_DIAGONAL 5

char matrix[5][5];

/// @brief Initialize matrix with dummy values
void init_matrix()
{
  for (int i{0}; i < 5; i++)
    for (int j{0}; j < 5; j++)
      matrix[i][j] = '*';
}

void print_matrix()
{
  for (int i{0}; i < 5; i++)
  {

    for (int j{0}; j < 5; j++)
      cout << matrix[i][j] << " ";

    cout << "\n";
  }
}

bool insert_horizontal(char *word, pair<int, int> pos, bool inverted)
{
  if (inverted)
  {
    if (pos.second - strlen(word) < -1)
      return false;

    for (int i{0}, j{0}; i < strlen(word); i++, j++)
      if (matrix[pos.first][pos.second - j] != '*' or matrix[pos.first][pos.second - j] != word[i])
        return false;

    for (int i{0}; i < strlen(word); i++)
      matrix[pos.first][pos.second--] = word[i];

    return true;
  }

  if (strlen(word) > 5 - pos.second)
    return false;

  for (int i{0}, j{0}; i < strlen(word); i++, j++)
    if (matrix[pos.first][pos.second + j] != '*' or matrix[pos.first][pos.second + j] != word[i])
      return false;

  for (int i{0}; i < strlen(word); i++)
    matrix[pos.first][pos.second++] = word[i];

  return true;
}

bool insert_vertical(char *word, pair<int, int> pos, bool inverted)
{
  if (inverted)
  {
    if (pos.first - strlen(word) < -1)
      return false;

    for (int i{0}, j{0}; i < strlen(word); i++, j++)
      if (matrix[pos.first - j][pos.second] != '*' or matrix[pos.first - j][pos.second] != word[i])
        return false;

    for (int i{0}; i < strlen(word); i++)
      matrix[pos.first--][pos.second] = word[i];

    return true;
  }

  if (strlen(word) > 5 - pos.first)
    return false;

  for (int i{0}, j{0}; i < strlen(word); i++, j++)
    if (matrix[pos.first + j][pos.second] != '*' or matrix[pos.first + j][pos.second] != word[i])
      return false;

  for (int i{0}; i < strlen(word); i++)
    matrix[pos.first++][pos.second] = word[i];

  return true;
}

bool insert_diagonal(char *word, pair<int, int> pos, bool inverted)
{
  if (inverted)
  {
    if (pos.second - strlen(word) < -1 or pos.second - strlen(word) < -1)
      return false;

    for (int i{0}, j{0}; i < strlen(word); i++, j++)
      if (matrix[pos.first - j][pos.second - j] != '*' or matrix[pos.first - j][pos.second - j] != word[i])
        return false;

    for (int i{0}; i < strlen(word); i++)
      matrix[pos.first--][pos.second--] = word[i];

    return true;
  }

  if (strlen(word) > 5 - pos.first and strlen(word) > 5 - pos.second)
    return false;

  for (int i{0}, j{0}; i < strlen(word); i++, j++)
    if (matrix[pos.first + j][pos.second + j] != '*' or matrix[pos.first + j][pos.second + j] != word[i])
      return false;

  for (int i{0}; i < strlen(word); i++)
    matrix[pos.first++][pos.second++] = word[i];

  return true;
}

bool can_insert(char *word, pair<int, int> &pos, int &orientation)
{
  switch (orientation)
  {
  case HORIZONTAL:
    return insert_horizontal(word, pos, false);
  case VERTICAL:
    return insert_vertical(word, pos, false);
  case DIAGONAL:
    return insert_diagonal(word, pos, false);
  case INVERTED_HORIZONTAL:
    return insert_horizontal(word, pos, true);
  case INVERTED_VERTICAL:
    return insert_vertical(word, pos, true);
  case INVERTED_DIAGONAL:
    return insert_diagonal(word, pos, true);
  default:
    return false;
  }
}

int main()
{
  init_matrix();
  srand((unsigned)time(NULL));

  char *words[5] = {"LEON", "PERRO", "GATO", "SAPO", "RANA"};

  for (int i{0}; i < 5; i++)
  {
    int orientation_tested[6]{0}, remaining_orientations{6};
    int orientation = rand() % 6;
    pair<int, int> pos = {rand() % 5, rand() % 5};
    orientation_tested[orientation] = 1;
    remaining_orientations--;

    while (not can_insert(words[i], pos, orientation))
    {
      orientation = rand() % 6;

      if (remaining_orientations == 0)
        break;

      if (orientation_tested[orientation])
        continue;

      pos = {rand() % 5, rand() % 5};
      remaining_orientations--;
    }
  }

  print_matrix();
  return 0;
}