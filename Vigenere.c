#include<stdio.h>
 
int main()
{
      int count, key_length, text_length, temp = 0;
      int z[4][text_length];
      char cipher_text[key_length], plaintext[text_length], key[key_length];
      printf("\nEnter key length:\t");
      scanf("%d", &key_length);
      printf("\nEnter key length:\t");
      scanf("%d", &text_length);
      printf("\nEnter the key:\n");
      for(count = 0; count < key_length; count++)
      {
            scanf("%c", &key[count]);
      }
      printf("\nEnter the plaintext:\n");
      for(count = 0; count < text_length; count++)
      {
            scanf("%c", &plaintext[count]);
      }
      for(count = 0; count < text_length; count++)
      {
            if(65 <= plaintext[count] && plaintext[count] <= 91)
            {
                  z[0][count] = plaintext[count] % 65;
            }
            else
            {
                  z[0][count] = plaintext[count] % 97;
            }
      }
      for(count = 0; count < text_length; count++)
      {
            printf("%d ", z[0][count]);
      }
      do
      {
            for(count = 0; count < key_length; count++)
            {
                  if(65 <= key[count] && key[count] <= 91)
                  {
                        z[1][temp + count] = key[count] % 65;
                  }
                  else
                  {
                        z[1][temp + count] = key[count] % 97;
                  }
            }
            temp = temp + key_length;
      }while(temp < text_length);
      printf("\n");
      for(count = 0; count < text_length; count++)
      {
            printf("%d ", z[1][count]);
      }
      printf("\n");
      for(count = 0; count < text_length; count++)
      {
            printf("%d ", z[2][count]);
      }
      printf("\nEncrypted Cipher Text:\t");
      for(count = 0; count < text_length; count++)
      {
            z[2][count] = (z[0][count] + z[1][count]) % 26;
            cipher_text[count] = (char)(z[2][count] + 97);
            printf("%c", cipher_text[count]);
      }
      return 0;
}
