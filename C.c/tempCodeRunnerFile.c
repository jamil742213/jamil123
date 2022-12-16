          if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
            temp = A[i];
            A[i] = A[indexofmin];
            A[indexofmin] = temp;