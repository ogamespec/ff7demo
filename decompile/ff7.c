// Sub 1...100

void sub_401000()
{
  dword_88FF38 = 0;
  word_89A09A = 0;
}

int sub_401018()
{
  char v1[256]; // [esp+Ch] [ebp-100h] BYREF

  sub_401000();
  dword_88FF3C = (int)&unk_891438;
  dword_89A09C = (int)&unk_890ED8;
  sub_4DA760();
  strcpy(v1, (const char *)dword_8937E8);
  strcat(v1, "kernel/window.bin");
  sub_4DA610(v1, 0, 0, (int)&dword_93A5D8, (int)sub_401372);
  sub_457F20(dword_93A5D8, (int)aCFf7SrcBattleY, 222);
  dword_93A5D8 = 0;
  strcpy(v1, (const char *)dword_8937E8);
  strcat(v1, "kernel/kernel.bin");
  sub_4DA610(v1, 0, 0, (int)&dword_93A5D8, (int)sub_4012DA);
  sub_457F20(dword_93A5D8, (int)aCFf7SrcBattleY_0, 234);
  dword_93A5D8 = 0;
  strcpy(v1, (const char *)dword_8937E8);
  strcat(v1, "kernel/kernel2.bin");
  sub_401228(v1);
  return 1;
}

void __cdecl sub_401228(char *a1)
{
  unsigned int v1; // [esp+Ch] [ebp-10h]
  unsigned int *v2; // [esp+10h] [ebp-Ch]
  char *v3; // [esp+10h] [ebp-Ch]
  int i; // [esp+14h] [ebp-8h]
  void *Block; // [esp+18h] [ebp-4h] BYREF

  Block = 0;
  sub_4DA6D9(a1, 0x6C00u, (int)&Block, 0);
  v2 = (unsigned int *)Block;
  sub_4DA760();
  for ( i = 0; i < 18; ++i )
  {
    v1 = *v2;
    v3 = (char *)(v2 + 1);
    qmemcpy((void *)sub_4DA779(v1), v3, v1);
    v2 = (unsigned int *)&v3[v1];
  }
  sub_457F20(Block, (int)aCFf7SrcBattleY_1, 87);
}

int sub_4012DA()
{
  int result; // eax
  int v1; // eax
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+0h] [ebp-Ch]
  int v4; // [esp+4h] [ebp-8h]
  unsigned __int16 v5; // [esp+8h] [ebp-4h]

  sub_4DB250(dword_93A5D8);
LABEL_2:
  for ( result = sub_4DB25D(v2); ; result = sub_4DB25D(v3) )
  {
    v5 = result;
    if ( (unsigned __int16)result == 0xFFFF )
      break;
    v4 = (unsigned __int16)sub_4DB2AA();
    if ( v5 != 9 )
    {
      if ( (&off_725050)[v5] )
        v2 = sub_4DB2F7((&off_725050)[v5]);
      goto LABEL_2;
    }
    v1 = sub_4DA779(v4);
    v3 = sub_4DB2F7(v1);
  }
  return result;
}

void sub_401372()
{
  unsigned __int16 v0; // [esp+4h] [ebp-8h]

  dword_93A5DC = (void *)sub_458181(0x10000u, (int)aCFf7SrcBattleY_2, 137);
  sub_4DB250(dword_93A5D8);
  while ( 1 )
  {
    v0 = sub_4DB25D();
    if ( v0 == 0xFFFF )
      break;
    if ( v0 )
    {
      if ( v0 == 1 )
        sub_4DB2F7(&unk_890ED8);
    }
    else
    {
      sub_4DB2F7(dword_93A5DC);
    }
  }
  sub_457F20(dword_93A5DC, (int)aCFf7SrcBattleY_3, 173);
  dword_93A5DC = 0;
}

void sub_401500()
{
  char v0[8]; // [esp+0h] [ebp-10h] BYREF
  double v1; // [esp+8h] [ebp-8h]

  v1 = 0.0;
  sub_458750(&unk_8935D8);
  sub_458780(&unk_8935D8, &unk_8935F0, v0);
  v1 = sub_45880D(v0);
  if ( dword_893618 )
  {
    while ( dbl_8935D0 - dbl_893620 > v1 )
    {
      sub_458750(&unk_8935D8);
      sub_458780(&unk_8935D8, &unk_8935F0, v0);
      v1 = sub_45880D(v0);
    }
    dword_893618 = 0;
    dbl_893620 = 0.0;
  }
  else if ( v1 > dbl_8935D0 )
  {
    dbl_893620 = v1 - dbl_8935D0;
    dword_893618 = 1;
  }
  else
  {
    while ( v1 < dbl_8935D0 )
    {
      sub_458750(&unk_8935D8);
      sub_458780(&unk_8935D8, &unk_8935F0, v0);
      v1 = sub_45880D(v0);
    }
    dword_893618 = 0;
    dbl_893620 = 0.0;
  }
}

int __cdecl sub_40164E(int a1)
{
  int v1; // ecx
  int v3; // [esp+0h] [ebp-4h]
  int v4; // [esp+0h] [ebp-4h]

  v3 = v1;
  sub_45D200(aEnteringFrameI);
  v4 = sub_404D80(v3);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      dword_892460 = 320;
      dword_892464 = 240;
      dword_893608 = 160;
      dword_893604 = 120;
      dword_8935E0 = 1;
      dword_89360C = 32;
    }
    else if ( v4 == 2 )
    {
      dword_892460 = 640;
      dword_892464 = 480;
      dword_893608 = 0;
      dword_893604 = 0;
      dword_8935E0 = 2;
      dword_89360C = 64;
    }
  }
  else
  {
    dword_892460 = 320;
    dword_892464 = 240;
    dword_893608 = 0;
    dword_893604 = 0;
    dword_8935E0 = 1;
    dword_89360C = 32;
  }
  word_8935F8 = dword_893608;
  word_8935FA = dword_893604;
  word_8935E8 = dword_893608 + dword_892460 / 2;
  word_8935EA = dword_893604;
  word_8935EC = 160;
  word_8935FC = 160;
  word_8935EE = 240;
  word_8935FE = 240;
  dword_893600 = 32;
  sub_401810();
  dword_893610 = 0;
  dword_893614 = 0;
  dbl_8935D0 = *(double *)(a1 + 48) / dbl_725198;
  sub_459D36(1);
  sub_458A2A(0, 1, 0, a1);
  dword_892468 = 0;
  return sub_45D200(aExittingFrameI);
}

int sub_401810()
{
  int result; // eax
  int v1; // [esp+Ch] [ebp-Ch]
  int i; // [esp+10h] [ebp-8h]
  int k; // [esp+10h] [ebp-8h]
  int j; // [esp+14h] [ebp-4h]
  int m; // [esp+14h] [ebp-4h]

  dword_892438 = (int)dword_892478;
  memset(dword_892478, 0, sizeof(dword_892478));
  dword_892470 = 25 * dword_8935E0 + dword_892460 / 2;
  dword_89246C = 25 * dword_8935E0 + dword_892464 / 2;
  dword_892478[1101] = 4160;
  *(_DWORD *)(dword_892438 + 4408) = 4160;
  *(_DWORD *)(dword_892438 + 4412) = 4096;
  *(_DWORD *)(dword_892438 + 4424) = 4;
  *(_DWORD *)(dword_892438 + 4428) = 0;
  *(_DWORD *)(dword_892438 + 4436) = 128;
  for ( i = 0; i < 9; ++i )
  {
    for ( j = 0; j < 11; ++j )
    {
      *(_WORD *)(dword_892438 + 72 * j + 3208 + 8 * i) = dword_89360C * j - dword_892470;
      *(_WORD *)(dword_892438 + 72 * j + 3208 + 8 * i + 2) = dword_89360C * i - dword_89246C;
      *(_WORD *)(dword_892438 + 72 * j + 3208 + 8 * i + 4) = 0;
    }
  }
  result = dword_892438;
  v1 = dword_892438;
  for ( k = 0; k < 8; ++k )
  {
    for ( m = 0; m < 10; ++m )
    {
      *(_DWORD *)(v1 + 320 * m + 4 + 40 * k) = *(_DWORD *)(v1 + 320 * m + 4 + 40 * k) & 0xFFFFFF | 0x9000000;
      *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 7) = 44;
      *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 7) |= 2u;
      *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 7) &= ~1u;
      *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 4) = 0x80;
      *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 5) = 0x80;
      *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 6) = 0x80;
      if ( m >= 5 )
      {
        if ( m == 5 )
        {
          *(_BYTE *)(v1 + 1604 + 40 * k + 12) = 1;
          *(_BYTE *)(v1 + 1604 + 40 * k + 13) = dword_893600 * k;
          *(_BYTE *)(v1 + 1604 + 40 * k + 20) = dword_893600 - 1;
          *(_BYTE *)(v1 + 1604 + 40 * k + 21) = dword_893600 * k;
          *(_BYTE *)(v1 + 1604 + 40 * k + 28) = 1;
          *(_BYTE *)(v1 + 1604 + 40 * k + 29) = dword_893600 * k + dword_893600 - 1;
          *(_BYTE *)(v1 + 1604 + 40 * k + 36) = dword_893600 - 1;
          result = 40 * k;
          *(_BYTE *)(v1 + 1604 + 40 * k + 37) = dword_893600 * k + dword_893600 - 1;
        }
        else
        {
          *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 12) = dword_893600 * (m - 5);
          *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 13) = dword_893600 * k;
          *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 20) = dword_893600 * (m - 5) + dword_893600 - 1;
          *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 21) = dword_893600 * k;
          *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 28) = dword_893600 * (m - 5);
          *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 29) = dword_893600 * k + dword_893600 - 1;
          *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 36) = dword_893600 * (m - 5) + dword_893600 - 1;
          result = v1 + 320 * m + 4;
          *(_BYTE *)(result + 40 * k + 37) = dword_893600 * k + dword_893600 - 1;
        }
      }
      else
      {
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 12) = dword_893600 * m;
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 13) = dword_893600 * k;
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 20) = dword_893600 * m + dword_893600 - 1;
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 21) = dword_893600 * k;
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 28) = dword_893600 * m;
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 29) = dword_893600 * k + dword_893600 - 1;
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 36) = dword_893600 * m + dword_893600 - 1;
        result = 40 * k;
        *(_BYTE *)(v1 + 320 * m + 4 + 40 * k + 37) = dword_893600 * k + dword_893600 - 1;
      }
    }
  }
  return result;
}

int sub_40213B()
{
  sub_45D200(aEnteringFrameQ);
  if ( dword_725188 >= 0 )
  {
    sub_4DB4A4(dword_725188);
    dword_725188 = -1;
  }
  if ( dword_72518C >= 0 )
  {
    sub_4DB4A4(dword_72518C);
    dword_72518C = -1;
  }
  if ( dword_725190 >= 0 )
  {
    sub_4DB4A4(dword_725190);
    dword_725190 = -1;
  }
  if ( dword_725194 >= 0 )
  {
    sub_4DB4A4(dword_725194);
    dword_725194 = -1;
  }
  word_BB7DEC = 2;
  return sub_45D200(aExittingFrameQ);
}

int __cdecl sub_4021E9(int a1)
{
  int result; // eax
  int v2[4]; // [esp+0h] [ebp-10h] BYREF

  sub_458750(&unk_8935F0);
  sub_45F173(a1);
  sub_45F190(a1);
  sub_45DA74(a1);
  sub_45F1AD(a1);
  if ( !dword_893610 )
    sub_4023F8(a1);
  sub_4DB581();
  result = sub_4592A0(0, a1);
  if ( result )
  {
    if ( dword_893610 == 3 )
    {
      sub_45D200(aSwirlSoundEffe);
      sub_408077(43);
      sub_45D200(aEndOfSwirlSoun);
    }
    if ( dword_893618 )
      sub_464732(0);
    else
      sub_464732(1);
    sub_4026D4(a1, dword_893614);
    if ( dword_893618 )
    {
      sub_401500();
      dword_893618 = 0;
      sub_464732(1);
      *(double *)(a1 + 64) = *(double *)(a1 + 64) + 1.0;
      sub_458750(&unk_8935F0);
      sub_4026D4(a1, dword_893614);
    }
    if ( !dword_893614 )
      sub_4DB595(0);
    sub_459275(1, a1);
    sub_45F1C4(a1);
    sub_45DAA1(a1);
    sub_4DB595(1);
    if ( ++dword_893610 == 3 )
      dword_893614 = 1;
    result = sub_4592CB(a1);
  }
  if ( dword_892468 )
  {
    memset(v2, 0, 12);
    v2[3] = 1065353216;
    sub_458A5A(dword_893608, dword_893604, dword_892460, dword_892464, a1);
    sub_458B3C(v2, a1);
    return sub_458A2A(1, 1, 1, a1);
  }
  return result;
}

_DWORD *__cdecl sub_4023F8(int a1)
{
  _DWORD *result; // eax
  _DWORD *v2; // [esp+0h] [ebp-4h]
  _DWORD *v3; // [esp+0h] [ebp-4h]
  _DWORD *v4; // [esp+0h] [ebp-4h]
  _DWORD *v5; // [esp+0h] [ebp-4h]

  v2 = (_DWORD *)sub_4DB4CC(a1);
  if ( v2 )
  {
    *v2 = 0;
    v2[50] = 1;
    v2[51] = 12;
    v2[52] = 0;
    v2[55] = word_8935F8;
    v2[56] = word_8935FA;
    v2[57] = word_8935FC;
    v2[58] = word_8935FE;
    v2[67] = dword_8935E0;
    v2[68] = dword_8935E0;
    dword_725188 = v2[69];
  }
  v3 = (_DWORD *)sub_4DB4CC(a1);
  if ( v3 )
  {
    *v3 = 0;
    v3[50] = 0;
    v3[51] = 12;
    v3[52] = 4;
    v3[55] = word_8935F8;
    v3[56] = word_8935FA;
    v3[57] = word_8935FC;
    v3[58] = word_8935FE;
    v3[67] = dword_8935E0;
    v3[68] = dword_8935E0;
    dword_725190 = v3[69];
  }
  v4 = (_DWORD *)sub_4DB4CC(a1);
  if ( v4 )
  {
    *v4 = 0;
    v4[50] = 1;
    v4[51] = 12;
    v4[52] = 0;
    v4[55] = word_8935E8;
    v4[56] = word_8935EA;
    v4[57] = word_8935EC;
    v4[58] = word_8935EE;
    v4[67] = dword_8935E0;
    v4[68] = dword_8935E0;
    dword_72518C = v4[69];
  }
  result = (_DWORD *)sub_4DB4CC(a1);
  v5 = result;
  if ( result )
  {
    *result = 0;
    result[50] = 0;
    result[51] = 12;
    result[52] = 4;
    result[55] = word_8935E8;
    result[56] = word_8935EA;
    result[57] = word_8935EC;
    result[58] = word_8935EE;
    result[67] = dword_8935E0;
    result[68] = dword_8935E0;
    result = (_DWORD *)result[69];
    dword_725194 = v5[69];
  }
  return result;
}

int __cdecl sub_4026D4(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8[64]; // [esp+14h] [ebp-88h] BYREF
  float v9[3]; // [esp+54h] [ebp-48h] BYREF
  float v10[3]; // [esp+60h] [ebp-3Ch] BYREF
  char v11[8]; // [esp+6Ch] [ebp-30h] BYREF
  int (__cdecl *v12)(int); // [esp+74h] [ebp-28h]
  int (__cdecl *v13)(int); // [esp+78h] [ebp-24h]
  int (__cdecl *v14)(int); // [esp+7Ch] [ebp-20h]
  int (__cdecl *v15)(int, int, int, int); // [esp+80h] [ebp-1Ch]
  int (__cdecl *v16)(int, int, int, int); // [esp+84h] [ebp-18h]
  int v17; // [esp+88h] [ebp-14h]
  int v18; // [esp+8Ch] [ebp-10h]
  int i; // [esp+90h] [ebp-Ch]
  int j; // [esp+94h] [ebp-8h]
  int v21; // [esp+98h] [ebp-4h]

  v18 = dword_892438;
  if ( a2 )
    ++*(_DWORD *)(dword_892438 + 4428);
  if ( *(int *)(dword_892438 + 4428) > 46 )
  {
    if ( *(int *)(dword_892438 + 4436) < 0 )
      *(_DWORD *)(dword_892438 + 4436) = 0;
    else
      *(_DWORD *)(dword_892438 + 4436) -= 4;
    HIBYTE(v17) = *(_BYTE *)(v18 + 11);
    LOBYTE(v17) = *(_BYTE *)(dword_892438 + 4436);
    BYTE1(v17) = *(_BYTE *)(dword_892438 + 4436);
    BYTE2(v17) = *(_BYTE *)(dword_892438 + 4436);
    for ( i = 0; i < 8; ++i )
    {
      for ( j = 0; j < 10; ++j )
        *(_DWORD *)(v18 + 320 * j + 4 + 40 * i + 4) = v17;
    }
    if ( *(int *)(dword_892438 + 4428) > 78 )
    {
      v12 = sub_408D62;
      v14 = sub_408E46;
      v13 = sub_408E27;
      v16 = sub_4098EB;
      v15 = sub_4098A3;
      sub_45F0C2(v11, a1);
      dword_892468 = 1;
    }
  }
  sub_45ACAE(dword_892438 + 4396, &unk_892440);
  sub_45B760(&unk_892440, dword_892438 + 4404);
  if ( a2 )
  {
    v21 = *(_DWORD *)(dword_892438 + 4424);
    *(_WORD *)(dword_892438 + 4400) -= (__int64)((double)*(int *)(dword_892438 + 4428) * 0.75 + 5.0);
    *(_DWORD *)(dword_892438 + 4424) += (__int16)(__int64)((double)*(int *)(dword_892438 + 4428) * 0.1 + 8.0);
    *(_DWORD *)(dword_892438 + 4404) += v21;
    *(_DWORD *)(dword_892438 + 4408) += v21;
  }
  for ( i = 0; i < 9; ++i )
  {
    for ( j = 0; j < 11; ++j )
    {
      sub_459835(&unk_892440, v8);
      v9[0] = (float)*(__int16 *)(dword_892438 + 72 * j + 3208 + 8 * i);
      v9[1] = (float)*(__int16 *)(dword_892438 + 72 * j + 3208 + 8 * i + 2);
      v9[2] = (float)*(__int16 *)(dword_892438 + 72 * j + 3208 + 8 * i + 4);
      sub_4652FE(v8, v9, v10);
      *(_WORD *)(dword_892438 + 36 * j + 4000 + 4 * i) = dword_893608 + dword_892470 + (__int64)v10[0];
      *(_WORD *)(dword_892438 + 36 * j + 4000 + 4 * i + 2) = dword_893604 + dword_89246C + (__int64)v10[1];
    }
  }
  v2 = sub_4DB551(dword_725188);
  sub_46481E(0x100000, v2);
  v3 = sub_4DB551(dword_72518C);
  result = sub_46481E(0x100000, v3);
  for ( i = 0; i < 8; ++i )
  {
    for ( j = 0; j < 10; ++j )
    {
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 8) = *(_WORD *)(dword_892438 + 36 * j + 4000 + 4 * i);
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 10) = *(_WORD *)(dword_892438 + 36 * j + 4000 + 4 * i + 2);
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 16) = *(_WORD *)(dword_892438 + 36 * (j + 1) + 4000 + 4 * i);
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 18) = *(_WORD *)(dword_892438 + 36 * (j + 1) + 4000 + 4 * i + 2);
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 24) = *(_WORD *)(dword_892438 + 36 * j + 4000 + 4 * i + 4);
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 26) = *(_WORD *)(dword_892438 + 36 * j + 4000 + 4 * i + 6);
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 32) = *(_WORD *)(dword_892438 + 36 * (j + 1) + 4000 + 4 * i + 4);
      *(_WORD *)(v18 + 320 * j + 4 + 40 * i + 34) = *(_WORD *)(dword_892438 + 36 * (j + 1) + 4000 + 4 * i + 6);
      result = sub_46473F();
      if ( result )
      {
        if ( a2 )
        {
          if ( j >= 5 )
            v5 = sub_4DB551(dword_72518C);
          else
            v5 = sub_4DB551(dword_725188);
          result = sub_402D92(40 * i + v18 + 320 * j + 4, v5);
        }
        else if ( j >= 5 )
        {
          v7 = sub_4DB551(dword_725194);
          result = sub_402D92(40 * i + v18 + 320 * j + 4, v7);
        }
        else
        {
          v6 = sub_4DB551(dword_725190);
          result = sub_402D92(40 * i + v18 + 320 * j + 4, v6);
        }
      }
    }
  }
  return result;
}

int __cdecl sub_402D92(int a1, int a2)
{
  int *v2; // ecx
  int v3; // eax
  int v4; // edx
  float v6; // [esp+0h] [ebp-90h]
  float v7; // [esp+4h] [ebp-8Ch]
  float v8; // [esp+8h] [ebp-88h]
  float v9; // [esp+Ch] [ebp-84h]
  float v10; // [esp+10h] [ebp-80h]
  float v11; // [esp+14h] [ebp-7Ch]
  float v12; // [esp+18h] [ebp-78h]
  float v13; // [esp+1Ch] [ebp-74h]
  int v14; // [esp+70h] [ebp-20h]
  char v15[16]; // [esp+74h] [ebp-1Ch] BYREF
  int v16; // [esp+84h] [ebp-Ch]
  int v17; // [esp+88h] [ebp-8h] BYREF
  int v18; // [esp+8Ch] [ebp-4h]

  v18 = 64;
  sub_45F802(*(unsigned __int16 *)(a1 + 22), *(unsigned __int16 *)(a1 + 14), a2, v15);
  v14 = v16;
  v2 = &v17;
  v3 = a1;
  LOBYTE(v2) = *(_BYTE *)(a1 + 6);
  v4 = a1;
  LOBYTE(v3) = *(_BYTE *)(a1 + 5);
  LOBYTE(v4) = *(_BYTE *)(a1 + 4);
  sub_45F764(v4, v3, v2, v18, &v17);
  v13 = (float)*(__int16 *)(a1 + 34);
  v12 = (float)*(__int16 *)(a1 + 32);
  v11 = (float)*(__int16 *)(a1 + 26);
  v10 = (float)*(__int16 *)(a1 + 24);
  v9 = (float)*(__int16 *)(a1 + 18);
  v8 = (float)*(__int16 *)(a1 + 16);
  v7 = (float)*(__int16 *)(a1 + 10);
  v6 = (float)*(__int16 *)(a1 + 8);
  return sub_461DB7(
           v17,
           LODWORD(v6),
           LODWORD(v7),
           LODWORD(v8),
           LODWORD(v9),
           LODWORD(v10),
           LODWORD(v11),
           LODWORD(v12),
           LODWORD(v13),
           *(unsigned __int8 *)(a1 + 12),
           *(unsigned __int8 *)(a1 + 13),
           *(unsigned __int8 *)(a1 + 20),
           *(unsigned __int8 *)(a1 + 21),
           *(unsigned __int8 *)(a1 + 28),
           *(unsigned __int8 *)(a1 + 29),
           *(unsigned __int8 *)(a1 + 36),
           *(unsigned __int8 *)(a1 + 37),
           v14,
           0,
           1065353216,
           a2);
}

void sub_402EDD()
{
  ;
}

void sub_402EE2()
{
  ;
}

int __cdecl sub_402EF0(char a1)
{
  int result; // eax
  int v2; // edx
  int v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+14h] [ebp-4h]

  LOWORD(v6) = 0;
  BYTE2(v6) = 0;
  HIBYTE(v6) = a1;
  result = sub_46654B(1, dword_893660);
  if ( result )
  {
    v5 = *(_DWORD *)(dword_893660 + 112);
    *(float *)v5 = (float)dword_893634;
    *(float *)(v5 + 4) = (float)dword_89366C;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 1065353216;
    *(_DWORD *)(v5 + 16) = v6;
    *(_DWORD *)(v5 + 20) = -16777216;
    v4 = *(_DWORD *)(dword_893660 + 112) + 32;
    *(float *)v4 = (float)dword_893634;
    *(float *)(v4 + 4) = (double)dword_89366C + (double)dword_893630;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 1065353216;
    *(_DWORD *)(v4 + 16) = v6;
    *(_DWORD *)(v4 + 20) = -16777216;
    v3 = *(_DWORD *)(dword_893660 + 112) + 64;
    *(float *)v3 = (double)dword_893634 + (double)dword_893638;
    *(float *)(v3 + 4) = (float)dword_89366C;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 1065353216;
    *(_DWORD *)(v3 + 16) = v6;
    *(_DWORD *)(v3 + 20) = -16777216;
    v2 = *(_DWORD *)(dword_893660 + 112);
    *(float *)(v2 + 96) = (double)dword_893634 + (double)dword_893638;
    *(float *)(v2 + 100) = (double)dword_89366C + (double)dword_893630;
    *(_DWORD *)(v2 + 104) = 0;
    *(_DWORD *)(v2 + 108) = 1065353216;
    v2 += 96;
    result = v6;
    *(_DWORD *)(v2 + 16) = v6;
    *(_DWORD *)(v2 + 20) = -16777216;
  }
  return result;
}

int sub_403073()
{
  int v0; // eax
  int result; // eax
  int v2; // ecx
  int v3; // [esp+4h] [ebp-30h]
  int v4; // [esp+8h] [ebp-2Ch]
  _DWORD *v5; // [esp+Ch] [ebp-28h]
  int v6; // [esp+14h] [ebp-20h]
  int v7; // [esp+18h] [ebp-1Ch]
  _DWORD *v8; // [esp+1Ch] [ebp-18h]

  if ( sub_46654B(1, dword_893658) )
  {
    v8 = *(_DWORD **)(dword_893658 + 112);
    *v8 = 1114636288;
    v8[1] = 1090519040;
    v8[2] = 1008981770;
    v8[3] = 1065353216;
    v8[4] = -2130706433;
    v8[5] = -16777216;
    v8[6] = 0;
    v8[7] = 0;
    v7 = *(_DWORD *)(dword_893658 + 112) + 32;
    *(_DWORD *)v7 = 1114636288;
    *(_DWORD *)(v7 + 4) = 1126039552;
    *(_DWORD *)(v7 + 8) = 1008981770;
    *(_DWORD *)(v7 + 12) = 1065353216;
    *(_DWORD *)(v7 + 16) = -2130706433;
    *(_DWORD *)(v7 + 20) = -16777216;
    *(_DWORD *)(v7 + 24) = 0;
    *(float *)(v7 + 28) = 0.0 + 0.5859375;
    v6 = *(_DWORD *)(dword_893658 + 112) + 64;
    *(_DWORD *)v6 = 1132593152;
    *(_DWORD *)(v6 + 4) = 1090519040;
    *(_DWORD *)(v6 + 8) = 1008981770;
    *(_DWORD *)(v6 + 12) = 1065353216;
    *(_DWORD *)(v6 + 16) = -2130706433;
    *(_DWORD *)(v6 + 20) = -16777216;
    *(float *)(v6 + 24) = 0.0 + 0.78125;
    *(_DWORD *)(v6 + 28) = 0;
    v0 = *(_DWORD *)(dword_893658 + 112);
    *(_DWORD *)(v0 + 96) = 1132593152;
    *(_DWORD *)(v0 + 100) = 1126039552;
    *(_DWORD *)(v0 + 104) = 1008981770;
    *(_DWORD *)(v0 + 108) = 1065353216;
    *(_DWORD *)(v0 + 112) = -2130706433;
    *(_DWORD *)(v0 + 116) = -16777216;
    *(float *)(v0 + 120) = 0.0 + 0.78125;
    *(float *)(v0 + 124) = 0.0 + 0.5859375;
  }
  result = sub_46654B(1, dword_89365C);
  if ( result )
  {
    v5 = *(_DWORD **)(dword_89365C + 112);
    *v5 = 1114636288;
    v5[1] = 1126039552;
    v5[2] = 1008981770;
    v5[3] = 1065353216;
    v5[4] = -2130706433;
    v5[5] = -16777216;
    v5[6] = 0;
    v5[7] = 0;
    v4 = *(_DWORD *)(dword_89365C + 112) + 32;
    *(_DWORD *)v4 = 1114636288;
    *(_DWORD *)(v4 + 4) = 1130889216;
    *(_DWORD *)(v4 + 8) = 1008981770;
    *(_DWORD *)(v4 + 12) = 1065353216;
    *(_DWORD *)(v4 + 16) = -2130706433;
    *(_DWORD *)(v4 + 20) = -16777216;
    *(_DWORD *)(v4 + 24) = 0;
    *(float *)(v4 + 28) = 0.0 + 0.578125;
    v3 = *(_DWORD *)(dword_89365C + 112) + 64;
    *(_DWORD *)v3 = 1132593152;
    *(_DWORD *)(v3 + 4) = 1126039552;
    *(_DWORD *)(v3 + 8) = 1008981770;
    *(_DWORD *)(v3 + 12) = 1065353216;
    *(_DWORD *)(v3 + 16) = -2130706433;
    *(_DWORD *)(v3 + 20) = -16777216;
    *(float *)(v3 + 24) = 0.0 + 0.78125;
    *(_DWORD *)(v3 + 28) = 0;
    v2 = *(_DWORD *)(dword_89365C + 112);
    *(_DWORD *)(v2 + 96) = 1132593152;
    *(_DWORD *)(v2 + 100) = 1130889216;
    *(_DWORD *)(v2 + 104) = 1008981770;
    *(_DWORD *)(v2 + 108) = 1065353216;
    *(_DWORD *)(v2 + 112) = -2130706433;
    *(_DWORD *)(v2 + 116) = -16777216;
    result = v2 + 96;
    *(float *)(v2 + 120) = 0.0 + 0.78125;
    *(float *)(v2 + 124) = 0.0 + 0.578125;
  }
  return result;
}

int sub_4033BF()
{
  int v0; // eax
  int result; // eax
  int v2; // ecx
  int v3; // [esp+4h] [ebp-30h]
  int v4; // [esp+8h] [ebp-2Ch]
  _DWORD *v5; // [esp+Ch] [ebp-28h]
  int v6; // [esp+14h] [ebp-20h]
  int v7; // [esp+18h] [ebp-1Ch]
  _DWORD *v8; // [esp+1Ch] [ebp-18h]

  if ( sub_46654B(1, dword_893658) )
  {
    v8 = *(_DWORD **)(dword_893658 + 112);
    *v8 = 1130102784;
    v8[1] = 1124073472;
    v8[2] = 1008981770;
    v8[3] = 1065353216;
    v8[4] = -2130706433;
    v8[5] = -16777216;
    v8[6] = 0;
    v8[7] = 0;
    v7 = *(_DWORD *)(dword_893658 + 112) + 32;
    *(_DWORD *)v7 = 1130102784;
    *(_DWORD *)(v7 + 4) = 1133182976;
    *(_DWORD *)(v7 + 8) = 1008981770;
    *(_DWORD *)(v7 + 12) = 1065353216;
    *(_DWORD *)(v7 + 16) = -2130706433;
    *(_DWORD *)(v7 + 20) = -16777216;
    *(_DWORD *)(v7 + 24) = 0;
    *(float *)(v7 + 28) = 0.0 + 0.5859375;
    v6 = *(_DWORD *)(dword_893658 + 112) + 64;
    *(_DWORD *)v6 = 1137836032;
    *(_DWORD *)(v6 + 4) = 1124073472;
    *(_DWORD *)(v6 + 8) = 1008981770;
    *(_DWORD *)(v6 + 12) = 1065353216;
    *(_DWORD *)(v6 + 16) = -2130706433;
    *(_DWORD *)(v6 + 20) = -16777216;
    *(float *)(v6 + 24) = 0.0 + 0.78125;
    *(_DWORD *)(v6 + 28) = 0;
    v0 = *(_DWORD *)(dword_893658 + 112);
    *(_DWORD *)(v0 + 96) = 1137836032;
    *(_DWORD *)(v0 + 100) = 1133182976;
    *(_DWORD *)(v0 + 104) = 1008981770;
    *(_DWORD *)(v0 + 108) = 1065353216;
    *(_DWORD *)(v0 + 112) = -2130706433;
    *(_DWORD *)(v0 + 116) = -16777216;
    *(float *)(v0 + 120) = 0.0 + 0.78125;
    *(float *)(v0 + 124) = 0.0 + 0.5859375;
  }
  result = sub_46654B(1, dword_89365C);
  if ( result )
  {
    v5 = *(_DWORD **)(dword_89365C + 112);
    *v5 = 1130102784;
    v5[1] = 1133182976;
    v5[2] = 1008981770;
    v5[3] = 1065353216;
    v5[4] = -2130706433;
    v5[5] = -16777216;
    v5[6] = 0;
    v5[7] = 0;
    v4 = *(_DWORD *)(dword_89365C + 112) + 32;
    *(_DWORD *)v4 = 1130102784;
    *(_DWORD *)(v4 + 4) = 1135607808;
    *(_DWORD *)(v4 + 8) = 1008981770;
    *(_DWORD *)(v4 + 12) = 1065353216;
    *(_DWORD *)(v4 + 16) = -2130706433;
    *(_DWORD *)(v4 + 20) = -16777216;
    *(_DWORD *)(v4 + 24) = 0;
    *(float *)(v4 + 28) = 0.0 + 0.578125;
    v3 = *(_DWORD *)(dword_89365C + 112) + 64;
    *(_DWORD *)v3 = 1137836032;
    *(_DWORD *)(v3 + 4) = 1133182976;
    *(_DWORD *)(v3 + 8) = 1008981770;
    *(_DWORD *)(v3 + 12) = 1065353216;
    *(_DWORD *)(v3 + 16) = -2130706433;
    *(_DWORD *)(v3 + 20) = -16777216;
    *(float *)(v3 + 24) = 0.0 + 0.78125;
    *(_DWORD *)(v3 + 28) = 0;
    v2 = *(_DWORD *)(dword_89365C + 112);
    *(_DWORD *)(v2 + 96) = 1137836032;
    *(_DWORD *)(v2 + 100) = 1135607808;
    *(_DWORD *)(v2 + 104) = 1008981770;
    *(_DWORD *)(v2 + 108) = 1065353216;
    *(_DWORD *)(v2 + 112) = -2130706433;
    *(_DWORD *)(v2 + 116) = -16777216;
    result = v2 + 96;
    *(float *)(v2 + 120) = 0.0 + 0.78125;
    *(float *)(v2 + 124) = 0.0 + 0.578125;
  }
  return result;
}

int sub_40370B()
{
  int v0; // eax
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // [esp+Ch] [ebp-6Ch]
  int v10; // [esp+14h] [ebp-64h]
  int v11; // [esp+18h] [ebp-60h]
  int v12; // [esp+1Ch] [ebp-5Ch]
  int v13; // [esp+24h] [ebp-54h]
  int v14; // [esp+28h] [ebp-50h]
  int v15; // [esp+2Ch] [ebp-4Ch]
  int v16; // [esp+34h] [ebp-44h]
  int v17; // [esp+38h] [ebp-40h]
  int v18; // [esp+3Ch] [ebp-3Ch]
  int v19; // [esp+44h] [ebp-34h]
  int v20; // [esp+48h] [ebp-30h]
  int v21; // [esp+4Ch] [ebp-2Ch]
  int v22; // [esp+54h] [ebp-24h]
  int v23; // [esp+58h] [ebp-20h]
  int v24; // [esp+5Ch] [ebp-1Ch]

  if ( sub_46654B(1, dword_893640) )
  {
    v24 = *(_DWORD *)(dword_893640 + 112);
    *(_DWORD *)v24 = 1123024896;
    *(float *)(v24 + 4) = (float)24;
    *(_DWORD *)(v24 + 8) = 1008981770;
    *(_DWORD *)(v24 + 12) = 1065353216;
    *(_DWORD *)(v24 + 16) = -2130706433;
    *(_DWORD *)(v24 + 20) = -16777216;
    *(_DWORD *)(v24 + 24) = 0;
    *(_DWORD *)(v24 + 28) = 0;
    v23 = *(_DWORD *)(dword_893640 + 112) + 32;
    *(_DWORD *)v23 = 1123024896;
    *(float *)(v23 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v23 + 8) = 1008981770;
    *(_DWORD *)(v23 + 12) = 1065353216;
    *(_DWORD *)(v23 + 16) = -2130706433;
    *(_DWORD *)(v23 + 20) = -16777216;
    *(_DWORD *)(v23 + 24) = 0;
    *(float *)(v23 + 28) = 0.0 + 1.0;
    v22 = *(_DWORD *)(dword_893640 + 112) + 64;
    *(_DWORD *)v22 = 1136394240;
    *(float *)(v22 + 4) = (float)24;
    *(_DWORD *)(v22 + 8) = 1008981770;
    *(_DWORD *)(v22 + 12) = 1065353216;
    *(_DWORD *)(v22 + 16) = -2130706433;
    *(_DWORD *)(v22 + 20) = -16777216;
    *(float *)(v22 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v22 + 28) = 0;
    v0 = *(_DWORD *)(dword_893640 + 112);
    *(_DWORD *)(v0 + 96) = 1136394240;
    *(float *)(v0 + 100) = (double)24 + 256.0;
    *(_DWORD *)(v0 + 104) = 1008981770;
    *(_DWORD *)(v0 + 108) = 1065353216;
    *(_DWORD *)(v0 + 112) = -2130706433;
    *(_DWORD *)(v0 + 116) = -16777216;
    *(float *)(v0 + 120) = 0.0 + 1.0;
    *(float *)(v0 + 124) = 0.0 + 1.0;
  }
  if ( sub_46654B(1, dword_893644) )
  {
    v21 = *(_DWORD *)(dword_893644 + 112);
    *(_DWORD *)v21 = 1136394240;
    *(float *)(v21 + 4) = (float)24;
    *(_DWORD *)(v21 + 8) = 1008981770;
    *(_DWORD *)(v21 + 12) = 1065353216;
    *(_DWORD *)(v21 + 16) = -2130706433;
    *(_DWORD *)(v21 + 20) = -16777216;
    *(_DWORD *)(v21 + 24) = 0;
    *(_DWORD *)(v21 + 28) = 0;
    v20 = *(_DWORD *)(dword_893644 + 112) + 32;
    *(_DWORD *)v20 = 1136394240;
    *(float *)(v20 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v20 + 8) = 1008981770;
    *(_DWORD *)(v20 + 12) = 1065353216;
    *(_DWORD *)(v20 + 16) = -2130706433;
    *(_DWORD *)(v20 + 20) = -16777216;
    *(_DWORD *)(v20 + 24) = 0;
    *(float *)(v20 + 28) = 0.0 + 1.0;
    v19 = *(_DWORD *)(dword_893644 + 112) + 64;
    *(_DWORD *)v19 = 1140981760;
    *(float *)(v19 + 4) = (float)24;
    *(_DWORD *)(v19 + 8) = 1008981770;
    *(_DWORD *)(v19 + 12) = 1065353216;
    *(_DWORD *)(v19 + 16) = -2130706433;
    *(_DWORD *)(v19 + 20) = -16777216;
    *(float *)(v19 + 24) = 0.0 + 0.5625;
    *(_DWORD *)(v19 + 28) = 0;
    v1 = *(_DWORD *)(dword_893644 + 112);
    *(_DWORD *)(v1 + 96) = 1140981760;
    *(float *)(v1 + 100) = (double)24 + 256.0;
    *(_DWORD *)(v1 + 104) = 1008981770;
    *(_DWORD *)(v1 + 108) = 1065353216;
    *(_DWORD *)(v1 + 112) = -2130706433;
    *(_DWORD *)(v1 + 116) = -16777216;
    *(float *)(v1 + 120) = 0.0 + 0.5625;
    *(float *)(v1 + 124) = 0.0 + 1.0;
  }
  if ( sub_46654B(1, dword_893648) )
  {
    v18 = *(_DWORD *)(dword_893648 + 112);
    *(_DWORD *)v18 = 1123024896;
    *(float *)(v18 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v18 + 8) = 1008981770;
    *(_DWORD *)(v18 + 12) = 1065353216;
    *(_DWORD *)(v18 + 16) = -2130706433;
    *(_DWORD *)(v18 + 20) = -16777216;
    *(_DWORD *)(v18 + 24) = 0;
    *(_DWORD *)(v18 + 28) = 0;
    v17 = *(_DWORD *)(dword_893648 + 112) + 32;
    *(_DWORD *)v17 = 1123024896;
    *(float *)(v17 + 4) = (double)24 + 256.0 + 44.0;
    *(_DWORD *)(v17 + 8) = 1008981770;
    *(_DWORD *)(v17 + 12) = 1065353216;
    *(_DWORD *)(v17 + 16) = -2130706433;
    *(_DWORD *)(v17 + 20) = -16777216;
    *(_DWORD *)(v17 + 24) = 0;
    *(float *)(v17 + 28) = 0.0 + 0.6875;
    v16 = *(_DWORD *)(dword_893648 + 112) + 64;
    *(_DWORD *)v16 = 1136394240;
    *(float *)(v16 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v16 + 8) = 1008981770;
    *(_DWORD *)(v16 + 12) = 1065353216;
    *(_DWORD *)(v16 + 16) = -2130706433;
    *(_DWORD *)(v16 + 20) = -16777216;
    *(float *)(v16 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v16 + 28) = 0;
    v2 = *(_DWORD *)(dword_893648 + 112);
    *(_DWORD *)(v2 + 96) = 1136394240;
    *(float *)(v2 + 100) = (double)24 + 256.0 + 44.0;
    *(_DWORD *)(v2 + 104) = 1008981770;
    *(_DWORD *)(v2 + 108) = 1065353216;
    *(_DWORD *)(v2 + 112) = -2130706433;
    *(_DWORD *)(v2 + 116) = -16777216;
    *(float *)(v2 + 120) = 0.0 + 1.0;
    *(float *)(v2 + 124) = 0.0 + 0.6875;
  }
  if ( sub_46654B(1, dword_89364C) )
  {
    v15 = *(_DWORD *)(dword_89364C + 112);
    *(_DWORD *)v15 = 1136394240;
    *(float *)(v15 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v15 + 8) = 1008981770;
    *(_DWORD *)(v15 + 12) = 1065353216;
    *(_DWORD *)(v15 + 16) = -2130706433;
    *(_DWORD *)(v15 + 20) = -16777216;
    *(_DWORD *)(v15 + 24) = 0;
    *(_DWORD *)(v15 + 28) = 0;
    v14 = *(_DWORD *)(dword_89364C + 112) + 32;
    *(_DWORD *)v14 = 1136394240;
    *(float *)(v14 + 4) = (double)24 + 256.0 + 44.0;
    *(_DWORD *)(v14 + 8) = 1008981770;
    *(_DWORD *)(v14 + 12) = 1065353216;
    *(_DWORD *)(v14 + 16) = -2130706433;
    *(_DWORD *)(v14 + 20) = -16777216;
    *(_DWORD *)(v14 + 24) = 0;
    *(float *)(v14 + 28) = 0.0 + 0.6875;
    v13 = *(_DWORD *)(dword_89364C + 112) + 64;
    *(_DWORD *)v13 = 1140981760;
    *(float *)(v13 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v13 + 8) = 1008981770;
    *(_DWORD *)(v13 + 12) = 1065353216;
    *(_DWORD *)(v13 + 16) = -2130706433;
    *(_DWORD *)(v13 + 20) = -16777216;
    *(float *)(v13 + 24) = 0.0 + 0.5625;
    *(_DWORD *)(v13 + 28) = 0;
    v3 = *(_DWORD *)(dword_89364C + 112);
    *(_DWORD *)(v3 + 96) = 1140981760;
    *(float *)(v3 + 100) = (double)24 + 256.0 + 44.0;
    *(_DWORD *)(v3 + 104) = 1008981770;
    *(_DWORD *)(v3 + 108) = 1065353216;
    *(_DWORD *)(v3 + 112) = -2130706433;
    *(_DWORD *)(v3 + 116) = -16777216;
    *(float *)(v3 + 120) = 0.0 + 0.5625;
    *(float *)(v3 + 124) = 0.0 + 0.6875;
  }
  if ( sub_46654B(1, dword_893650) )
  {
    v12 = *(_DWORD *)(dword_893650 + 112);
    *(_DWORD *)v12 = 1123024896;
    *(float *)(v12 + 4) = (double)24 + 300.0;
    *(_DWORD *)(v12 + 8) = 1008981770;
    *(_DWORD *)(v12 + 12) = 1065353216;
    *(_DWORD *)(v12 + 16) = -2130706433;
    *(_DWORD *)(v12 + 20) = -16777216;
    *(_DWORD *)(v12 + 24) = 0;
    *(_DWORD *)(v12 + 28) = 0;
    v11 = *(_DWORD *)(dword_893650 + 112) + 32;
    *(_DWORD *)v11 = 1123024896;
    *(float *)(v11 + 4) = (double)24 + 300.0 + 148.0;
    *(_DWORD *)(v11 + 8) = 1008981770;
    *(_DWORD *)(v11 + 12) = 1065353216;
    *(_DWORD *)(v11 + 16) = -2130706433;
    *(_DWORD *)(v11 + 20) = -16777216;
    *(_DWORD *)(v11 + 24) = 0;
    *(float *)(v11 + 28) = 0.0 + 0.578125;
    v10 = *(_DWORD *)(dword_893650 + 112) + 64;
    *(_DWORD *)v10 = 1136394240;
    *(float *)(v10 + 4) = (double)24 + 300.0;
    *(_DWORD *)(v10 + 8) = 1008981770;
    *(_DWORD *)(v10 + 12) = 1065353216;
    *(_DWORD *)(v10 + 16) = -2130706433;
    *(_DWORD *)(v10 + 20) = -16777216;
    *(float *)(v10 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v10 + 28) = 0;
    v4 = *(_DWORD *)(dword_893650 + 112);
    *(_DWORD *)(v4 + 96) = 1136394240;
    *(float *)(v4 + 100) = (double)24 + 300.0 + 148.0;
    *(_DWORD *)(v4 + 104) = 1008981770;
    *(_DWORD *)(v4 + 108) = 1065353216;
    *(_DWORD *)(v4 + 112) = -2130706433;
    *(_DWORD *)(v4 + 116) = -16777216;
    *(float *)(v4 + 120) = 0.0 + 1.0;
    *(float *)(v4 + 124) = 0.0 + 0.578125;
  }
  result = sub_46654B(1, dword_893654);
  if ( result )
  {
    v9 = *(_DWORD *)(dword_893654 + 112);
    *(_DWORD *)v9 = 1136394240;
    *(float *)(v9 + 4) = (double)24 + 300.0;
    *(_DWORD *)(v9 + 8) = 1008981770;
    *(_DWORD *)(v9 + 12) = 1065353216;
    *(_DWORD *)(v9 + 16) = -2130706433;
    *(_DWORD *)(v9 + 20) = -16777216;
    *(_DWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 28) = 0;
    v6 = *(_DWORD *)(dword_893654 + 112);
    *(_DWORD *)(v6 + 32) = 1136394240;
    *(float *)(v6 + 36) = (double)24 + 300.0 + 148.0;
    *(_DWORD *)(v6 + 40) = 1008981770;
    *(_DWORD *)(v6 + 44) = 1065353216;
    *(_DWORD *)(v6 + 48) = -2130706433;
    *(_DWORD *)(v6 + 52) = -16777216;
    *(_DWORD *)(v6 + 56) = 0;
    *(float *)(v6 + 60) = 0.0 + 0.578125;
    v7 = *(_DWORD *)(dword_893654 + 112);
    *(_DWORD *)(v7 + 64) = 1140981760;
    *(float *)(v7 + 68) = (double)24 + 300.0;
    *(_DWORD *)(v7 + 72) = 1008981770;
    *(_DWORD *)(v7 + 76) = 1065353216;
    *(_DWORD *)(v7 + 80) = -2130706433;
    *(_DWORD *)(v7 + 84) = -16777216;
    *(float *)(v7 + 88) = 0.0 + 0.5625;
    *(_DWORD *)(v7 + 92) = 0;
    v8 = *(_DWORD *)(dword_893654 + 112);
    *(_DWORD *)(v8 + 96) = 1140981760;
    *(float *)(v8 + 100) = (double)24 + 300.0 + 148.0;
    *(_DWORD *)(v8 + 104) = 1008981770;
    *(_DWORD *)(v8 + 108) = 1065353216;
    *(_DWORD *)(v8 + 112) = -2130706433;
    *(_DWORD *)(v8 + 116) = -16777216;
    *(float *)(v8 + 120) = 0.0 + 0.5625;
    result = v8 + 96;
    *(float *)(v8 + 124) = 0.0 + 0.578125;
  }
  return result;
}

int sub_40414A()
{
  int v0; // eax
  int v1; // edx
  int result; // eax
  int v3; // [esp+8h] [ebp-288h]
  char *v4; // [esp+Ch] [ebp-284h]
  char *v5; // [esp+Ch] [ebp-284h]
  char *v6; // [esp+Ch] [ebp-284h]
  char *v7; // [esp+Ch] [ebp-284h]
  char *v8; // [esp+Ch] [ebp-284h]
  char v9[36]; // [esp+14h] [ebp-27Ch] BYREF
  void *v10; // [esp+38h] [ebp-258h]
  int v11; // [esp+58h] [ebp-238h]
  int v12; // [esp+5Ch] [ebp-234h]
  int v13; // [esp+60h] [ebp-230h]
  int v14; // [esp+64h] [ebp-22Ch]
  int v15; // [esp+68h] [ebp-228h]
  int v16; // [esp+84h] [ebp-20Ch]
  unsigned int v17; // [esp+88h] [ebp-208h]
  int v18; // [esp+8Ch] [ebp-204h]
  char Buffer[256]; // [esp+90h] [ebp-200h] BYREF
  char FileName[256]; // [esp+190h] [ebp-100h] BYREF

  v18 = sub_46E59B();
  v3 = sub_404D80();
  v17 = sub_40A864() % 9u;
  strcpy(FileName, (const char *)sub_40775F());
  strcat(FileName, "cd/disc_us.lgp");
  if ( !sub_46D541(FileName, 16) )
  {
    sprintf(Buffer, "Failed to load: %s\n", FileName);
    sub_45D200(Buffer);
  }
  sub_46C56A(0);
  sub_46C616(4, v9);
  v11 = 1;
  v12 = 16;
  v13 = 0;
  v10 = &unk_893678;
  if ( v3 == 2 )
  {
    v17 *= 4;
    sub_46C689(4, v9);
    v4 = off_725288[v17++];
    dword_893640 = sub_46937F(1, 12, v9, v4, *(_DWORD *)(v18 + 2320));
    v5 = off_725288[v17++];
    dword_893644 = sub_46937F(1, 12, v9, v5, *(_DWORD *)(v18 + 2320));
    v6 = off_725288[v17++];
    dword_893648 = sub_46937F(1, 12, v9, v6, *(_DWORD *)(v18 + 2320));
    v7 = off_725288[v17++];
    dword_89364C = sub_46937F(1, 12, v9, v7, *(_DWORD *)(v18 + 2320));
    v14 |= 1u;
    v15 = -15461356;
    switch ( byte_8A16EC )
    {
      case 1:
        dword_893650 = sub_46937F(1, 12, v9, off_725260[0], *(_DWORD *)(v18 + 2320));
        dword_893654 = sub_46937F(1, 12, v9, off_725264[0], *(_DWORD *)(v18 + 2320));
        break;
      case 2:
        dword_893650 = sub_46937F(1, 12, v9, off_725268[0], *(_DWORD *)(v18 + 2320));
        dword_893654 = sub_46937F(1, 12, v9, off_72526C[0], *(_DWORD *)(v18 + 2320));
        break;
      case 3:
        dword_893650 = sub_46937F(1, 12, v9, off_725270[0], *(_DWORD *)(v18 + 2320));
        dword_893654 = sub_46937F(1, 12, v9, off_725274[0], *(_DWORD *)(v18 + 2320));
        break;
    }
  }
  else
  {
    sub_46C689(4, v9);
    v8 = off_725318[v17];
    dword_893658 = sub_46937F(1, 12, v9, v8, *(_DWORD *)(v18 + 2320));
    if ( byte_8A16EC == 1 )
    {
      v0 = sub_46937F(1, 12, v9, off_725278[0], *(_DWORD *)(v18 + 2320));
    }
    else if ( byte_8A16EC == 2 )
    {
      v0 = sub_46937F(1, 12, v9, off_72527C[0], *(_DWORD *)(v18 + 2320));
    }
    else
    {
      if ( byte_8A16EC == 3 )
        v8 = off_725280;
      v0 = sub_46937F(1, 12, v9, v8, *(_DWORD *)(v18 + 2320));
    }
    dword_89365C = v0;
  }
  v1 = v16;
  BYTE1(v1) = BYTE1(v16) | 0x40;
  v16 = v1;
  sub_46C689(0, v9);
  result = sub_46937F(0, 8, v9, 0, *(_DWORD *)(v18 + 2320));
  dword_893660 = result;
  return result;
}

// -----------------------------------------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int _cfltcvt_init_1()
{
  dword_893634 = 0;
  dword_89366C = 0;
  dword_893638 = 640;
  dword_893630 = 480;
  return sub_40414A();
}

int sub_404A7D()
{
  CHAR VolumeNameBuffer[512]; // [esp+108h] [ebp-204h] BYREF

  dword_893668 = 0;
  strncpy(Destination, Source, 2u);
  SetErrorMode(1u);
  if ( GetVolumeInformationA(Source, VolumeNameBuffer, 0x100u, 0, 0, 0, 0, 0) )
  {
    if ( !strcmp(VolumeNameBuffer, aFf7disc1) )
    {
      dword_893668 = 1;
    }
    else if ( !strcmp(VolumeNameBuffer, aFf7disc2) )
    {
      dword_893668 = 2;
    }
    else if ( !strcmp(VolumeNameBuffer, aFf7disc3) )
    {
      dword_893668 = 3;
    }
  }
  return dword_893668;
}

int __cdecl sub_404D80()
{
  BYTE Data[4]; // [esp+0h] [ebp-18h] BYREF
  int v2; // [esp+4h] [ebp-14h]
  HKEY phkResult; // [esp+8h] [ebp-10h] BYREF
  LSTATUS v4; // [esp+Ch] [ebp-Ch]
  DWORD Type; // [esp+10h] [ebp-8h] BYREF
  DWORD cbData; // [esp+14h] [ebp-4h] BYREF

  v2 = 2;
  v4 = RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Graphics",
         0,
         0x20019u,
         &phkResult);
  if ( !v4 )
  {
    cbData = 256;
    v4 = RegQueryValueExA(phkResult, "Mode", 0, &Type, Data, &cbData);
    if ( !v4 )
      v2 = *(_DWORD *)Data;
    RegCloseKey(phkResult);
  }
  return dword_89367C;
}

int __cdecl sub_404E00(char a1)
{
  int result; // eax
  int v2; // edx
  int v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+14h] [ebp-4h]

  LOWORD(v6) = 0;
  BYTE2(v6) = 0;
  HIBYTE(v6) = a1;
  result = sub_46654B(1, dword_8936A0);
  if ( result )
  {
    v5 = *(_DWORD *)(dword_8936A0 + 112);
    *(float *)v5 = (float)dword_8936AC;
    *(float *)(v5 + 4) = (float)dword_8936B8;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 1065353216;
    *(_DWORD *)(v5 + 16) = v6;
    *(_DWORD *)(v5 + 20) = -16777216;
    v4 = *(_DWORD *)(dword_8936A0 + 112) + 32;
    *(float *)v4 = (float)dword_8936AC;
    *(float *)(v4 + 4) = (double)dword_8936B8 + (double)dword_8936A4;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 1065353216;
    *(_DWORD *)(v4 + 16) = v6;
    *(_DWORD *)(v4 + 20) = -16777216;
    v3 = *(_DWORD *)(dword_8936A0 + 112) + 64;
    *(float *)v3 = (double)dword_8936AC + (double)dword_8936B0;
    *(float *)(v3 + 4) = (float)dword_8936B8;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 1065353216;
    *(_DWORD *)(v3 + 16) = v6;
    *(_DWORD *)(v3 + 20) = -16777216;
    v2 = *(_DWORD *)(dword_8936A0 + 112);
    *(float *)(v2 + 96) = (double)dword_8936AC + (double)dword_8936B0;
    *(float *)(v2 + 100) = (double)dword_8936B8 + (double)dword_8936A4;
    *(_DWORD *)(v2 + 104) = 0;
    *(_DWORD *)(v2 + 108) = 1065353216;
    v2 += 96;
    result = v6;
    *(_DWORD *)(v2 + 16) = v6;
    *(_DWORD *)(v2 + 20) = -16777216;
  }
  return result;
}

int sub_404F83()
{
  int v0; // eax
  int result; // eax
  int v2; // ecx
  int v3; // [esp+4h] [ebp-30h]
  int v4; // [esp+8h] [ebp-2Ch]
  _DWORD *v5; // [esp+Ch] [ebp-28h]
  int v6; // [esp+14h] [ebp-20h]
  int v7; // [esp+18h] [ebp-1Ch]
  _DWORD *v8; // [esp+1Ch] [ebp-18h]

  if ( sub_46654B(1, dword_893698) )
  {
    v8 = *(_DWORD **)(dword_893698 + 112);
    *v8 = 1098907648;
    v8[1] = 1094713344;
    v8[2] = 1008981770;
    v8[3] = 1065353216;
    v8[4] = -2130706433;
    v8[5] = -16777216;
    v8[6] = 0;
    v8[7] = 0;
    v7 = *(_DWORD *)(dword_893698 + 112) + 32;
    *(_DWORD *)v7 = 1098907648;
    *(_DWORD *)(v7 + 4) = 1130627072;
    *(_DWORD *)(v7 + 8) = 1008981770;
    *(_DWORD *)(v7 + 12) = 1065353216;
    *(_DWORD *)(v7 + 16) = -2130706433;
    *(_DWORD *)(v7 + 20) = -16777216;
    *(_DWORD *)(v7 + 24) = 0;
    *(float *)(v7 + 28) = 0.0 + 0.84375;
    v6 = *(_DWORD *)(dword_893698 + 112) + 64;
    *(_DWORD *)v6 = 1132986368;
    *(_DWORD *)(v6 + 4) = 1094713344;
    *(_DWORD *)(v6 + 8) = 1008981770;
    *(_DWORD *)(v6 + 12) = 1065353216;
    *(_DWORD *)(v6 + 16) = -2130706433;
    *(_DWORD *)(v6 + 20) = -16777216;
    *(float *)(v6 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v6 + 28) = 0;
    v0 = *(_DWORD *)(dword_893698 + 112);
    *(_DWORD *)(v0 + 96) = 1132986368;
    *(_DWORD *)(v0 + 100) = 1130627072;
    *(_DWORD *)(v0 + 104) = 1008981770;
    *(_DWORD *)(v0 + 108) = 1065353216;
    *(_DWORD *)(v0 + 112) = -2130706433;
    *(_DWORD *)(v0 + 116) = -16777216;
    *(float *)(v0 + 120) = 0.0 + 1.0;
    *(float *)(v0 + 124) = 0.0 + 0.84375;
  }
  result = sub_46654B(1, dword_89369C);
  if ( result )
  {
    v5 = *(_DWORD **)(dword_89369C + 112);
    *v5 = 1132986368;
    v5[1] = 1094713344;
    v5[2] = 1008981770;
    v5[3] = 1065353216;
    v5[4] = -2130706433;
    v5[5] = -16777216;
    v5[6] = 0;
    v5[7] = 0;
    v4 = *(_DWORD *)(dword_89369C + 112) + 32;
    *(_DWORD *)v4 = 1132986368;
    *(_DWORD *)(v4 + 4) = 1130627072;
    *(_DWORD *)(v4 + 8) = 1008981770;
    *(_DWORD *)(v4 + 12) = 1065353216;
    *(_DWORD *)(v4 + 16) = -2130706433;
    *(_DWORD *)(v4 + 20) = -16777216;
    *(_DWORD *)(v4 + 24) = 0;
    *(float *)(v4 + 28) = 0.0 + 0.84375;
    v3 = *(_DWORD *)(dword_89369C + 112) + 64;
    *(_DWORD *)v3 = 1134034944;
    *(_DWORD *)(v3 + 4) = 1094713344;
    *(_DWORD *)(v3 + 8) = 1008981770;
    *(_DWORD *)(v3 + 12) = 1065353216;
    *(_DWORD *)(v3 + 16) = -2130706433;
    *(_DWORD *)(v3 + 20) = -16777216;
    *(float *)(v3 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v3 + 28) = 0;
    v2 = *(_DWORD *)(dword_89369C + 112);
    *(_DWORD *)(v2 + 96) = 1134034944;
    *(_DWORD *)(v2 + 100) = 1130627072;
    *(_DWORD *)(v2 + 104) = 1008981770;
    *(_DWORD *)(v2 + 108) = 1065353216;
    *(_DWORD *)(v2 + 112) = -2130706433;
    *(_DWORD *)(v2 + 116) = -16777216;
    result = v2 + 96;
    *(float *)(v2 + 120) = 0.0 + 1.0;
    *(float *)(v2 + 124) = 0.0 + 0.84375;
  }
  return result;
}

int sub_4052C8()
{
  int v0; // eax
  int result; // eax
  int v2; // ecx
  int v3; // [esp+4h] [ebp-30h]
  int v4; // [esp+8h] [ebp-2Ch]
  _DWORD *v5; // [esp+Ch] [ebp-28h]
  int v6; // [esp+14h] [ebp-20h]
  int v7; // [esp+18h] [ebp-1Ch]
  _DWORD *v8; // [esp+1Ch] [ebp-18h]

  if ( sub_46654B(1, dword_893698) )
  {
    v8 = *(_DWORD **)(dword_893698 + 112);
    *v8 = 1127219200;
    v8[1] = 1124335616;
    v8[2] = 1008981770;
    v8[3] = 1065353216;
    v8[4] = -2130706433;
    v8[5] = -16777216;
    v8[6] = 0;
    v8[7] = 0;
    v7 = *(_DWORD *)(dword_893698 + 112) + 32;
    *(_DWORD *)v7 = 1127219200;
    *(_DWORD *)(v7 + 4) = 1135476736;
    *(_DWORD *)(v7 + 8) = 1008981770;
    *(_DWORD *)(v7 + 12) = 1065353216;
    *(_DWORD *)(v7 + 16) = -2130706433;
    *(_DWORD *)(v7 + 20) = -16777216;
    *(_DWORD *)(v7 + 24) = 0;
    *(float *)(v7 + 28) = 0.0 + 0.84375;
    v6 = *(_DWORD *)(dword_893698 + 112) + 64;
    *(_DWORD *)v6 = 1138229248;
    *(_DWORD *)(v6 + 4) = 1124335616;
    *(_DWORD *)(v6 + 8) = 1008981770;
    *(_DWORD *)(v6 + 12) = 1065353216;
    *(_DWORD *)(v6 + 16) = -2130706433;
    *(_DWORD *)(v6 + 20) = -16777216;
    *(float *)(v6 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v6 + 28) = 0;
    v0 = *(_DWORD *)(dword_893698 + 112);
    *(_DWORD *)(v0 + 96) = 1138229248;
    *(_DWORD *)(v0 + 100) = 1135476736;
    *(_DWORD *)(v0 + 104) = 1008981770;
    *(_DWORD *)(v0 + 108) = 1065353216;
    *(_DWORD *)(v0 + 112) = -2130706433;
    *(_DWORD *)(v0 + 116) = -16777216;
    *(float *)(v0 + 120) = 0.0 + 1.0;
    *(float *)(v0 + 124) = 0.0 + 0.84375;
  }
  result = sub_46654B(1, dword_89369C);
  if ( result )
  {
    v5 = *(_DWORD **)(dword_89369C + 112);
    *v5 = 1138229248;
    v5[1] = 1124335616;
    v5[2] = 1008981770;
    v5[3] = 1065353216;
    v5[4] = -2130706433;
    v5[5] = -16777216;
    v5[6] = 0;
    v5[7] = 0;
    v4 = *(_DWORD *)(dword_89369C + 112) + 32;
    *(_DWORD *)v4 = 1138229248;
    *(_DWORD *)(v4 + 4) = 1135476736;
    *(_DWORD *)(v4 + 8) = 1008981770;
    *(_DWORD *)(v4 + 12) = 1065353216;
    *(_DWORD *)(v4 + 16) = -2130706433;
    *(_DWORD *)(v4 + 20) = -16777216;
    *(_DWORD *)(v4 + 24) = 0;
    *(float *)(v4 + 28) = 0.0 + 0.84375;
    v3 = *(_DWORD *)(dword_89369C + 112) + 64;
    *(_DWORD *)v3 = 1139277824;
    *(_DWORD *)(v3 + 4) = 1124335616;
    *(_DWORD *)(v3 + 8) = 1008981770;
    *(_DWORD *)(v3 + 12) = 1065353216;
    *(_DWORD *)(v3 + 16) = -2130706433;
    *(_DWORD *)(v3 + 20) = -16777216;
    *(float *)(v3 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v3 + 28) = 0;
    v2 = *(_DWORD *)(dword_89369C + 112);
    *(_DWORD *)(v2 + 96) = 1139277824;
    *(_DWORD *)(v2 + 100) = 1135476736;
    *(_DWORD *)(v2 + 104) = 1008981770;
    *(_DWORD *)(v2 + 108) = 1065353216;
    *(_DWORD *)(v2 + 112) = -2130706433;
    *(_DWORD *)(v2 + 116) = -16777216;
    result = v2 + 96;
    *(float *)(v2 + 120) = 0.0 + 1.0;
    *(float *)(v2 + 124) = 0.0 + 0.84375;
  }
  return result;
}

int sub_40560D()
{
  int v0; // eax
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // edx
  int v7; // [esp+4h] [ebp-78h]
  int v8; // [esp+8h] [ebp-74h]
  int v9; // [esp+Ch] [ebp-70h]
  int v10; // [esp+14h] [ebp-68h]
  int v11; // [esp+18h] [ebp-64h]
  int v12; // [esp+1Ch] [ebp-60h]
  int v13; // [esp+24h] [ebp-58h]
  int v14; // [esp+28h] [ebp-54h]
  int v15; // [esp+2Ch] [ebp-50h]
  int v16; // [esp+34h] [ebp-48h]
  int v17; // [esp+38h] [ebp-44h]
  int v18; // [esp+3Ch] [ebp-40h]
  int v19; // [esp+44h] [ebp-38h]
  int v20; // [esp+48h] [ebp-34h]
  int v21; // [esp+4Ch] [ebp-30h]
  int v22; // [esp+54h] [ebp-28h]
  int v23; // [esp+58h] [ebp-24h]
  int v24; // [esp+5Ch] [ebp-20h]

  if ( sub_46654B(1, dword_893680) )
  {
    v24 = *(_DWORD *)(dword_893680 + 112);
    *(float *)v24 = (float)32;
    *(float *)(v24 + 4) = (float)24;
    *(_DWORD *)(v24 + 8) = 1008981770;
    *(_DWORD *)(v24 + 12) = 1065353216;
    *(_DWORD *)(v24 + 16) = -2130706433;
    *(_DWORD *)(v24 + 20) = -16777216;
    *(_DWORD *)(v24 + 24) = 0;
    *(_DWORD *)(v24 + 28) = 0;
    v23 = *(_DWORD *)(dword_893680 + 112) + 32;
    *(float *)v23 = (float)32;
    *(float *)(v23 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v23 + 8) = 1008981770;
    *(_DWORD *)(v23 + 12) = 1065353216;
    *(_DWORD *)(v23 + 16) = -2130706433;
    *(_DWORD *)(v23 + 20) = -16777216;
    *(_DWORD *)(v23 + 24) = 0;
    *(float *)(v23 + 28) = 0.0 + 1.0;
    v22 = *(_DWORD *)(dword_893680 + 112) + 64;
    *(float *)v22 = (double)32 + 256.0;
    *(float *)(v22 + 4) = (float)24;
    *(_DWORD *)(v22 + 8) = 1008981770;
    *(_DWORD *)(v22 + 12) = 1065353216;
    *(_DWORD *)(v22 + 16) = -2130706433;
    *(_DWORD *)(v22 + 20) = -16777216;
    *(float *)(v22 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v22 + 28) = 0;
    v0 = *(_DWORD *)(dword_893680 + 112);
    *(float *)(v0 + 96) = (double)32 + 256.0;
    *(float *)(v0 + 100) = (double)24 + 256.0;
    *(_DWORD *)(v0 + 104) = 1008981770;
    *(_DWORD *)(v0 + 108) = 1065353216;
    *(_DWORD *)(v0 + 112) = -2130706433;
    *(_DWORD *)(v0 + 116) = -16777216;
    *(float *)(v0 + 120) = 0.0 + 1.0;
    *(float *)(v0 + 124) = 0.0 + 1.0;
  }
  if ( sub_46654B(1, dword_893684) )
  {
    v21 = *(_DWORD *)(dword_893684 + 112);
    *(float *)v21 = (double)32 + 256.0;
    *(float *)(v21 + 4) = (float)24;
    *(_DWORD *)(v21 + 8) = 1008981770;
    *(_DWORD *)(v21 + 12) = 1065353216;
    *(_DWORD *)(v21 + 16) = -2130706433;
    *(_DWORD *)(v21 + 20) = -16777216;
    *(_DWORD *)(v21 + 24) = 0;
    *(_DWORD *)(v21 + 28) = 0;
    v20 = *(_DWORD *)(dword_893684 + 112) + 32;
    *(float *)v20 = (double)32 + 256.0;
    *(float *)(v20 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v20 + 8) = 1008981770;
    *(_DWORD *)(v20 + 12) = 1065353216;
    *(_DWORD *)(v20 + 16) = -2130706433;
    *(_DWORD *)(v20 + 20) = -16777216;
    *(_DWORD *)(v20 + 24) = 0;
    *(float *)(v20 + 28) = 0.0 + 1.0;
    v19 = *(_DWORD *)(dword_893684 + 112) + 64;
    *(float *)v19 = (double)32 + 256.0 + 256.0;
    *(float *)(v19 + 4) = (float)24;
    *(_DWORD *)(v19 + 8) = 1008981770;
    *(_DWORD *)(v19 + 12) = 1065353216;
    *(_DWORD *)(v19 + 16) = -2130706433;
    *(_DWORD *)(v19 + 20) = -16777216;
    *(float *)(v19 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v19 + 28) = 0;
    v1 = *(_DWORD *)(dword_893684 + 112);
    *(float *)(v1 + 96) = (double)32 + 256.0 + 256.0;
    *(float *)(v1 + 100) = (double)24 + 256.0;
    *(_DWORD *)(v1 + 104) = 1008981770;
    *(_DWORD *)(v1 + 108) = 1065353216;
    *(_DWORD *)(v1 + 112) = -2130706433;
    *(_DWORD *)(v1 + 116) = -16777216;
    *(float *)(v1 + 120) = 0.0 + 1.0;
    *(float *)(v1 + 124) = 0.0 + 1.0;
  }
  if ( sub_46654B(1, dword_893688) )
  {
    v18 = *(_DWORD *)(dword_893688 + 112);
    *(float *)v18 = (double)32 + 256.0 + 256.0;
    *(float *)(v18 + 4) = (float)24;
    *(_DWORD *)(v18 + 8) = 1008981770;
    *(_DWORD *)(v18 + 12) = 1065353216;
    *(_DWORD *)(v18 + 16) = -2130706433;
    *(_DWORD *)(v18 + 20) = -16777216;
    *(_DWORD *)(v18 + 24) = 0;
    *(_DWORD *)(v18 + 28) = 0;
    v17 = *(_DWORD *)(dword_893688 + 112) + 32;
    *(float *)v17 = (double)32 + 256.0 + 256.0;
    *(float *)(v17 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v17 + 8) = 1008981770;
    *(_DWORD *)(v17 + 12) = 1065353216;
    *(_DWORD *)(v17 + 16) = -2130706433;
    *(_DWORD *)(v17 + 20) = -16777216;
    *(_DWORD *)(v17 + 24) = 0;
    *(float *)(v17 + 28) = 0.0 + 1.0;
    v16 = *(_DWORD *)(dword_893688 + 112) + 64;
    *(float *)v16 = (double)32 + 256.0 + 256.0 + 64.0;
    *(float *)(v16 + 4) = (float)24;
    *(_DWORD *)(v16 + 8) = 1008981770;
    *(_DWORD *)(v16 + 12) = 1065353216;
    *(_DWORD *)(v16 + 16) = -2130706433;
    *(_DWORD *)(v16 + 20) = -16777216;
    *(float *)(v16 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v16 + 28) = 0;
    v2 = *(_DWORD *)(dword_893688 + 112);
    *(float *)(v2 + 96) = (double)32 + 256.0 + 256.0 + 64.0;
    *(float *)(v2 + 100) = (double)24 + 256.0;
    *(_DWORD *)(v2 + 104) = 1008981770;
    *(_DWORD *)(v2 + 108) = 1065353216;
    *(_DWORD *)(v2 + 112) = -2130706433;
    *(_DWORD *)(v2 + 116) = -16777216;
    *(float *)(v2 + 120) = 0.0 + 1.0;
    *(float *)(v2 + 124) = 0.0 + 1.0;
  }
  if ( sub_46654B(1, dword_89368C) )
  {
    v15 = *(_DWORD *)(dword_89368C + 112);
    *(float *)v15 = (float)32;
    *(float *)(v15 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v15 + 8) = 1008981770;
    *(_DWORD *)(v15 + 12) = 1065353216;
    *(_DWORD *)(v15 + 16) = -2130706433;
    *(_DWORD *)(v15 + 20) = -16777216;
    *(_DWORD *)(v15 + 24) = 0;
    *(_DWORD *)(v15 + 28) = 0;
    v14 = *(_DWORD *)(dword_89368C + 112) + 32;
    *(float *)v14 = (float)32;
    *(float *)(v14 + 4) = (double)24 + 256.0 + 176.0;
    *(_DWORD *)(v14 + 8) = 1008981770;
    *(_DWORD *)(v14 + 12) = 1065353216;
    *(_DWORD *)(v14 + 16) = -2130706433;
    *(_DWORD *)(v14 + 20) = -16777216;
    *(_DWORD *)(v14 + 24) = 0;
    *(float *)(v14 + 28) = 0.0 + 0.6875;
    v13 = *(_DWORD *)(dword_89368C + 112) + 64;
    *(float *)v13 = (double)32 + 256.0;
    *(float *)(v13 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v13 + 8) = 1008981770;
    *(_DWORD *)(v13 + 12) = 1065353216;
    *(_DWORD *)(v13 + 16) = -2130706433;
    *(_DWORD *)(v13 + 20) = -16777216;
    *(float *)(v13 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v13 + 28) = 0;
    v3 = *(_DWORD *)(dword_89368C + 112);
    *(float *)(v3 + 96) = (double)32 + 256.0;
    *(float *)(v3 + 100) = (double)24 + 256.0 + 176.0;
    *(_DWORD *)(v3 + 104) = 1008981770;
    *(_DWORD *)(v3 + 108) = 1065353216;
    *(_DWORD *)(v3 + 112) = -2130706433;
    *(_DWORD *)(v3 + 116) = -16777216;
    *(float *)(v3 + 120) = 0.0 + 1.0;
    *(float *)(v3 + 124) = 0.0 + 0.6875;
  }
  if ( sub_46654B(1, dword_893690) )
  {
    v12 = *(_DWORD *)(dword_893690 + 112);
    *(float *)v12 = (double)32 + 256.0;
    *(float *)(v12 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v12 + 8) = 1008981770;
    *(_DWORD *)(v12 + 12) = 1065353216;
    *(_DWORD *)(v12 + 16) = -2130706433;
    *(_DWORD *)(v12 + 20) = -16777216;
    *(_DWORD *)(v12 + 24) = 0;
    *(_DWORD *)(v12 + 28) = 0;
    v11 = *(_DWORD *)(dword_893690 + 112) + 32;
    *(float *)v11 = (double)32 + 256.0;
    *(float *)(v11 + 4) = (double)24 + 256.0 + 176.0;
    *(_DWORD *)(v11 + 8) = 1008981770;
    *(_DWORD *)(v11 + 12) = 1065353216;
    *(_DWORD *)(v11 + 16) = -2130706433;
    *(_DWORD *)(v11 + 20) = -16777216;
    *(_DWORD *)(v11 + 24) = 0;
    *(float *)(v11 + 28) = 0.0 + 0.6875;
    v10 = *(_DWORD *)(dword_893690 + 112) + 64;
    *(float *)v10 = (double)32 + 256.0 + 256.0;
    *(float *)(v10 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v10 + 8) = 1008981770;
    *(_DWORD *)(v10 + 12) = 1065353216;
    *(_DWORD *)(v10 + 16) = -2130706433;
    *(_DWORD *)(v10 + 20) = -16777216;
    *(float *)(v10 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v10 + 28) = 0;
    v4 = *(_DWORD *)(dword_893690 + 112);
    *(float *)(v4 + 96) = (double)32 + 256.0 + 256.0;
    *(float *)(v4 + 100) = (double)24 + 256.0 + 176.0;
    *(_DWORD *)(v4 + 104) = 1008981770;
    *(_DWORD *)(v4 + 108) = 1065353216;
    *(_DWORD *)(v4 + 112) = -2130706433;
    *(_DWORD *)(v4 + 116) = -16777216;
    *(float *)(v4 + 120) = 0.0 + 1.0;
    *(float *)(v4 + 124) = 0.0 + 0.6875;
  }
  result = sub_46654B(1, dword_893694);
  if ( result )
  {
    v9 = *(_DWORD *)(dword_893694 + 112);
    *(float *)v9 = (double)32 + 256.0 + 256.0;
    *(float *)(v9 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v9 + 8) = 1008981770;
    *(_DWORD *)(v9 + 12) = 1065353216;
    *(_DWORD *)(v9 + 16) = -2130706433;
    *(_DWORD *)(v9 + 20) = -16777216;
    *(_DWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 28) = 0;
    v8 = *(_DWORD *)(dword_893694 + 112) + 32;
    *(float *)v8 = (double)32 + 256.0 + 256.0;
    *(float *)(v8 + 4) = (double)24 + 256.0 + 176.0;
    *(_DWORD *)(v8 + 8) = 1008981770;
    *(_DWORD *)(v8 + 12) = 1065353216;
    *(_DWORD *)(v8 + 16) = -2130706433;
    *(_DWORD *)(v8 + 20) = -16777216;
    *(_DWORD *)(v8 + 24) = 0;
    *(float *)(v8 + 28) = 0.0 + 0.6875;
    v7 = *(_DWORD *)(dword_893694 + 112) + 64;
    *(float *)v7 = (double)32 + 256.0 + 256.0 + 64.0;
    *(float *)(v7 + 4) = (double)24 + 256.0;
    *(_DWORD *)(v7 + 8) = 1008981770;
    *(_DWORD *)(v7 + 12) = 1065353216;
    *(_DWORD *)(v7 + 16) = -2130706433;
    *(_DWORD *)(v7 + 20) = -16777216;
    *(float *)(v7 + 24) = 0.0 + 1.0;
    *(_DWORD *)(v7 + 28) = 0;
    v6 = *(_DWORD *)(dword_893694 + 112);
    *(float *)(v6 + 96) = (double)32 + 256.0 + 256.0 + 64.0;
    *(float *)(v6 + 100) = (double)24 + 256.0 + 176.0;
    *(_DWORD *)(v6 + 104) = 1008981770;
    *(_DWORD *)(v6 + 108) = 1065353216;
    *(_DWORD *)(v6 + 112) = -2130706433;
    *(_DWORD *)(v6 + 116) = -16777216;
    *(float *)(v6 + 120) = 0.0 + 1.0;
    result = v6 + 96;
    *(float *)(v6 + 124) = 0.0 + 0.6875;
  }
  return result;
}

int sub_4060D1()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // edx
  int result; // eax
  int v5; // [esp+8h] [ebp-284h]
  char v6[36]; // [esp+10h] [ebp-27Ch] BYREF
  void *v7; // [esp+34h] [ebp-258h]
  int v8; // [esp+54h] [ebp-238h]
  int v9; // [esp+58h] [ebp-234h]
  int v10; // [esp+5Ch] [ebp-230h]
  int v11; // [esp+60h] [ebp-22Ch]
  int v12; // [esp+64h] [ebp-228h]
  int v13; // [esp+80h] [ebp-20Ch]
  unsigned int i; // [esp+84h] [ebp-208h]
  int v15; // [esp+88h] [ebp-204h]
  char Buffer[256]; // [esp+8Ch] [ebp-200h] BYREF
  char FileName[256]; // [esp+18Ch] [ebp-100h] BYREF

  v15 = sub_46E59B();
  v5 = sub_404D80();
  strcpy(FileName, (const char *)sub_40775F());
  strcat(FileName, "cd/disc_us.lgp");
  if ( !sub_46D541(FileName, 16) )
  {
    sprintf(Buffer, "Failed to load: %s\n", FileName);
    sub_45D200(Buffer);
  }
  sub_46C56A(0);
  sub_46C616(4, v6);
  v8 = 1;
  v9 = 16;
  v10 = 0;
  v7 = &unk_8936C4;
  if ( v5 == 2 )
  {
    v11 |= 1u;
    v12 = -15461356;
    sub_46C689(4, v6);
    for ( i = 0; i < 6; ++i )
    {
      v0 = sub_46937F(1, 12, v6, off_725650[i], *(_DWORD *)(v15 + 2320));
      dword_893680[i] = v0;
    }
  }
  else
  {
    v1 = v11;
    LOBYTE(v1) = v11 | 1;
    v11 = v1;
    v12 = -15461356;
    sub_46C689(4, v6);
    for ( i = 0; i < 2; ++i )
    {
      v2 = sub_46937F(1, 12, v6, off_725668[i], *(_DWORD *)(v15 + 2320));
      dword_893698[i] = v2;
    }
  }
  v3 = v13;
  BYTE1(v3) = BYTE1(v13) | 0x40;
  v13 = v3;
  sub_46C689(0, v6);
  result = sub_46937F(0, 8, v6, 0, *(_DWORD *)(v15 + 2320));
  dword_8936A0 = result;
  return result;
}

int sub_406367()
{
  int v1; // [esp+0h] [ebp-4h]

  v1 = sub_404D80();
  dword_8936BC = 1;
  dword_8936B4 = 1;
  dword_8936A8 = 0;
  dword_8936C0 = 0;
  dword_725648 = 255;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      dword_8936AC = 160;
      dword_8936B8 = 120;
      dword_8936B0 = 320;
      dword_8936A4 = 240;
    }
    else
    {
      dword_8936AC = 0;
      dword_8936B8 = 0;
      dword_8936B0 = 640;
      dword_8936A4 = 480;
    }
  }
  else
  {
    dword_8936AC = 0;
    dword_8936B8 = 0;
    dword_8936B0 = 320;
    dword_8936A4 = 240;
  }
  return sub_4060D1();
}

int __thiscall sub_406436(void *this)
{
  int i; // [esp+0h] [ebp-4h]

  sub_4AB940(193, 60, 0, 0, 0, 0);
  sub_40CDB1(this);
  for ( i = 0; i < 6; ++i )
    sub_469355(4 * i + 8992384);
  sub_469355(dword_893698);
  sub_469355(&dword_89369C);
  sub_469355(&dword_8936A0);
  byte_BB9199 = 0;
  word_BB7DEC = 27;
  word_BB9194 = 26;
  return sub_46DF4D(16);
}

int __cdecl sub_4064D7(int a1)
{
  int result; // eax
  int v2[4]; // [esp+0h] [ebp-34h] BYREF
  int v3; // [esp+10h] [ebp-24h]
  int v4; // [esp+14h] [ebp-20h]
  char v5[8]; // [esp+18h] [ebp-1Ch] BYREF
  int (__cdecl *v6)(int); // [esp+20h] [ebp-14h]
  int (__cdecl *v7)(int); // [esp+24h] [ebp-10h]
  int (__cdecl *v8)(int); // [esp+28h] [ebp-Ch]
  int (__cdecl *v9)(int, int, int, int); // [esp+2Ch] [ebp-8h]
  int (__cdecl *v10)(int, int, int, int); // [esp+30h] [ebp-4h]

  v3 = sub_404D80();
  sub_45F173(a1);
  sub_45F190(a1);
  memset(v2, 0, 12);
  v2[3] = 1065353216;
  sub_458B3C(v2, a1);
  sub_458A06(a1);
  v4 = 0;
  sub_45901A(2, 0, a1);
  result = sub_4592A0(v4, a1);
  if ( result )
  {
    if ( v3 == 2 )
    {
      sub_40560D();
      sub_46691A(dword_893680[0], a1);
      sub_46691A(dword_893684, a1);
      sub_46691A(dword_893688, a1);
      sub_46691A(dword_89368C, a1);
      sub_46691A(dword_893690, a1);
      sub_46691A(dword_893694, a1);
    }
    else if ( v3 )
    {
      if ( v3 == 1 )
      {
        sub_4052C8();
        sub_46691A(dword_893698[0], a1);
        sub_46691A(dword_89369C, a1);
      }
    }
    else
    {
      sub_404F83();
      sub_46691A(dword_893698[0], a1);
      sub_46691A(dword_89369C, a1);
    }
    sub_4561EE(0);
    if ( sub_456B44(-1) )
      dword_8936A8 = 1;
    if ( dword_8936A8 )
    {
      if ( dword_8936B4 )
      {
        sub_404E00(dword_8936C0);
        sub_459275(1, a1);
        sub_46691A(dword_8936A0, a1);
        dword_8936C0 += 51;
        if ( dword_8936C0 > 255 )
        {
          dword_8936B4 = 0;
          v6 = sub_408D62;
          v8 = sub_408E46;
          v9 = sub_4098A3;
          v10 = sub_4098EB;
          v7 = sub_408E27;
          sub_45F0C2(v5, a1);
        }
      }
    }
    if ( dword_8936BC )
    {
      sub_404E00(dword_725648);
      sub_459275(1, a1);
      sub_46691A(dword_8936A0, a1);
      dword_725648 -= 51;
      if ( dword_725648 <= 51 )
        dword_8936BC = 0;
    }
    return sub_4592CB(a1);
  }
  return result;
}

int __cdecl sub_406770(int a1)
{
  return a1;
}

void sub_406797()
{
  ;
}

int __cdecl sub_40682D(void *Buffer)
{
  int v2[4]; // [esp+8h] [ebp-18h] BYREF
  FILE *Stream; // [esp+18h] [ebp-8h]
  int v4; // [esp+1Ch] [ebp-4h]

  v4 = 1;
  Stream = fopen(FileName, Mode);
  if ( !Stream )
    return 0;
  if ( sub_6ED980(Buffer, 0x10u, 1u, Stream) != 1 )
    v4 = 0;
  memset(v2, 0, sizeof(v2));
  *((_DWORD *)Buffer + 4) = memcmp(Buffer, v2, 0x10u) != 0;
  if ( sub_6ED980((char *)Buffer + 20, 4u, 1u, Stream) != 1 )
    v4 = 0;
  *((_BYTE *)Buffer + 24) = 0;
  *((_DWORD *)Buffer + 72) = 0;
  if ( sub_6ED980((char *)Buffer + 284, 4u, 1u, Stream) != 1 )
    v4 = 0;
  fclose(Stream);
  return v4;
}

int __cdecl sub_406AFB(_DWORD *a1)
{
  char v2[4]; // [esp+Ch] [ebp-2D4h] BYREF
  int v3; // [esp+10h] [ebp-2D0h]
  int v4; // [esp+30h] [ebp-2B0h]
  int v5; // [esp+34h] [ebp-2ACh]
  char Buffer[16]; // [esp+38h] [ebp-2A8h] BYREF
  int v7; // [esp+48h] [ebp-298h]
  int v8; // [esp+4Ch] [ebp-294h]
  char v9[260]; // [esp+50h] [ebp-290h] BYREF
  int v10; // [esp+154h] [ebp-18Ch]
  int v11; // [esp+158h] [ebp-188h]

  v5 = sub_40682D(Buffer);
  if ( v5 )
  {
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        a1[597] = 640;
        a1[598] = 480;
        dword_89367C = 1;
      }
      else if ( v10 == 2 )
      {
        a1[597] = 640;
        a1[598] = 480;
        dword_89367C = 2;
      }
    }
    else
    {
      a1[597] = 320;
      a1[598] = 240;
      dword_89367C = 0;
    }
    if ( v7 )
    {
      if ( v7 == 1 )
        a1[602] = 0;
    }
    else
    {
      a1[602] = 1;
    }
    a1[610] = 0;
    a1[603] = (v11 & 1) != 0;
    a1[601] = 1;
    a1[594] = 0;
    a1[595] = 1;
    a1[609] = 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        a1[664] = 0;
      }
      else if ( v8 == 2 )
      {
        a1[664] = 2;
        a1[665] = sub_458724(v9);
        sub_45EE80(2, v2);
        v3 = a1[665];
        if ( !sub_45EEA5(v2, a1) )
          a1[664] = 1;
      }
      else
      {
        a1[664] = 1;
      }
    }
    else
    {
      a1[664] = 1;
    }
    v4 = 0;
    a1[526] = 0;
    a1[525] = v4;
    a1[652] = 1;
  }
  return v5;
}

DWORD sub_406D70()
{
  DWORD LastError; // eax
  DWORD result; // eax
  DWORD v2; // eax
  unsigned int v3; // ecx
  char *v4; // edi
  DWORD v5; // eax
  unsigned int v6; // ecx
  char *v7; // edi
  DWORD v8; // eax
  unsigned int v9; // ecx
  char *v10; // edi
  char *v11; // edi
  HKEY phkResult; // [esp+8h] [ebp-220h] BYREF
  CHAR ValueName[8]; // [esp+Ch] [ebp-21Ch] BYREF
  LSTATUS v14; // [esp+14h] [ebp-214h]
  char v15[8]; // [esp+18h] [ebp-210h] BYREF
  DWORD Type; // [esp+20h] [ebp-208h] BYREF
  CHAR Buffer[256]; // [esp+24h] [ebp-204h] BYREF
  BYTE Data[256]; // [esp+124h] [ebp-104h] BYREF
  DWORD cbData; // [esp+224h] [ebp-4h] BYREF

  strcpy(ValueName, "Sound");
  strcpy(v15, "Midi");
  dword_8937C8 = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni, 55);
  dword_8937CC = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_0, 56);
  Source = (LPCSTR)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_1, 57);
  dword_8937E8 = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_2, 58);
  dword_8937D8 = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_3, 59);
  dword_8937D4 = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_4, 60);
  dword_8937DC = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_5, 61);
  dword_8937F4 = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_6, 62);
  dword_8937E4 = (void *)sub_458339(0x100u, 1u, (int)aCFf7SrcMainIni_7, 63);
  v14 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Square Soft, Inc.\\Final Fantasy VII", 0, 0x20019u, &phkResult);
  LastError = GetLastError();
  result = FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x100u, 0);
  if ( !v14 )
  {
    cbData = 256;
    v14 = RegQueryValueExA(phkResult, "DataDrive", 0, &Type, Data, &cbData);
    strcpy((char *)Source, (const char *)Data);
    cbData = 256;
    v14 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData);
    if ( v14 )
      dword_8937D0 = 1;
    else
      dword_8937D0 = strcmp((const char *)Data, aOn) == 0;
    cbData = 256;
    v14 = RegQueryValueExA(phkResult, v15, 0, &Type, Data, &cbData);
    if ( v14 )
      dword_8937E0 = 1;
    else
      dword_8937E0 = strcmp((const char *)Data, aOn_0) == 0;
    cbData = 256;
    v14 = RegQueryValueExA(phkResult, "AppPath", 0, &Type, Data, &cbData);
    v2 = GetLastError();
    FormatMessageA(0x1000u, 0, v2, 0, Buffer, 0x100u, 0);
    if ( v14 )
    {
      v3 = strlen(aFf7) + 1;
      v4 = &aFf7[v3];
    }
    else
    {
      v3 = strlen((const char *)Data) + 1;
      v4 = (char *)&Data[v3];
    }
    qmemcpy(dword_8937C8, &v4[-v3], v3);
    cbData = 256;
    v14 = RegQueryValueExA(phkResult, "DataPath", 0, &Type, Data, &cbData);
    v5 = GetLastError();
    FormatMessageA(0x1000u, 0, v5, 0, Buffer, 0x100u, 0);
    if ( v14 )
    {
      v6 = strlen(aFf7Data) + 1;
      v7 = &aFf7Data[v6];
    }
    else
    {
      v6 = strlen((const char *)Data) + 1;
      v7 = (char *)&Data[v6];
    }
    qmemcpy(dword_8937E8, &v7[-v6], v6);
    cbData = 256;
    v14 = RegQueryValueExA(phkResult, "MoviePath", 0, &Type, Data, &cbData);
    v8 = GetLastError();
    FormatMessageA(0x1000u, 0, v8, 0, Buffer, 0x100u, 0);
    if ( v14 )
    {
      v9 = strlen(aFf7DataMovies) + 1;
      v10 = &aFf7DataMovies[v9];
    }
    else
    {
      v9 = strlen((const char *)Data) + 1;
      v10 = (char *)&Data[v9];
    }
    qmemcpy(dword_8937CC, &v10[-v9], v9);
    cbData = 4;
    v14 = RegQueryValueExA(phkResult, "FullInstall", 0, &Type, &::Data, &cbData);
    if ( v14 )
    {
      strcpy((char *)dword_8937E4, Source);
      v11 = (char *)dword_8937E4 + strlen((const char *)dword_8937E4) + 1;
    }
    else
    {
      if ( *(_DWORD *)&::Data )
      {
        strcpy((char *)dword_8937E4, (const char *)dword_8937E8);
LABEL_23:
        strcpy((char *)dword_8937D8, (const char *)dword_8937E8);
        strcat((char *)dword_8937D8, "sound");
        strcpy((char *)dword_8937D4, (const char *)dword_8937E8);
        strcat((char *)dword_8937D4, "music");
        strcpy((char *)dword_8937DC, (const char *)dword_8937E8);
        strcat((char *)dword_8937DC, "midi");
        return RegCloseKey(phkResult);
      }
      strcpy((char *)dword_8937E4, Source);
      v11 = (char *)dword_8937E4 + strlen((const char *)dword_8937E4) + 1;
    }
    strcpy(v11 - 1, "ff7/");
    goto LABEL_23;
  }
  return result;
}

void sub_407457()
{
  sub_457F20(dword_8937C8, (int)aCFf7SrcMainIni_8, 223);
  sub_457F20(dword_8937CC, (int)aCFf7SrcMainIni_9, 224);
  sub_457F20((void *)Source, (int)aCFf7SrcMainIni_10, 225);
  sub_457F20(dword_8937E8, (int)aCFf7SrcMainIni_11, 226);
  sub_457F20(dword_8937D8, (int)aCFf7SrcMainIni_12, 227);
  sub_457F20(dword_8937D4, (int)aCFf7SrcMainIni_13, 228);
  sub_457F20(dword_8937DC, (int)aCFf7SrcMainIni_14, 229);
  sub_457F20(dword_8937F4, (int)aCFf7SrcMainIni_15, 230);
  sub_457F20(dword_8937E4, (int)aCFf7SrcMainIni_16, 231);
}

int sub_40753A(BYTE Data, ...)
{
  HKEY phkResult; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h]
  LSTATUS v4; // [esp+8h] [ebp-4h]
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, Data);
  v3 = 1;
  v4 = RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Midi",
         0,
         0x20006u,
         &phkResult);
  if ( !v4 )
  {
    v3 = 1;
    v4 = RegSetValueExA(phkResult, "MusicVolume", 0, 4u, &Data, 4u);
    if ( !v4 )
      v3 = 0;
    v4 = RegCloseKey(phkResult);
  }
  v4 = RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Sound",
         0,
         0x20006u,
         &phkResult);
  if ( !v4 )
  {
    v3 = 1;
    v4 = RegSetValueExA(phkResult, "SFXVolume", 0, 4u, (const BYTE *)va, 4u);
    if ( !v4 )
      v3 = 0;
    v4 = RegCloseKey(phkResult);
  }
  return v3;
}

int sub_407610()
{
  HKEY phkResult; // [esp+0h] [ebp-1Ch] BYREF
  int v2; // [esp+4h] [ebp-18h]
  BYTE v3[4]; // [esp+8h] [ebp-14h] BYREF
  LSTATUS v4; // [esp+Ch] [ebp-10h]
  DWORD Type; // [esp+10h] [ebp-Ch] BYREF
  BYTE Data[4]; // [esp+14h] [ebp-8h] BYREF
  DWORD cbData; // [esp+18h] [ebp-4h] BYREF

  v2 = 1;
  v4 = RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Midi",
         0,
         1u,
         &phkResult);
  if ( !v4 )
  {
    cbData = 4;
    v4 = RegQueryValueExA(phkResult, "MusicVolume", 0, &Type, Data, &cbData);
    if ( v4 )
    {
      v2 = 0;
    }
    else
    {
      if ( *(int *)Data < 0 )
        *(_DWORD *)Data = 0;
      if ( *(int *)Data > 100 )
        *(_DWORD *)Data = 100;
      v4 = RegCloseKey(phkResult);
    }
    RegCloseKey(phkResult);
  }
  v4 = RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Sound",
         0,
         1u,
         &phkResult);
  if ( !v4 )
  {
    cbData = 4;
    v4 = RegQueryValueExA(phkResult, "SFXVolume", 0, &Type, v3, &cbData);
    if ( v4 )
    {
      v2 = 0;
    }
    else
    {
      if ( *(int *)v3 < 0 )
        *(_DWORD *)v3 = 0;
      if ( *(int *)v3 > 100 )
        *(_DWORD *)v3 = 100;
      v4 = RegCloseKey(phkResult);
    }
    RegCloseKey(phkResult);
  }
  v2 = 1;
  *(_DWORD *)Data = 100;
  *(_DWORD *)v3 = 100;
  sub_41031C(100, 100);
  return v2;
}

void *sub_40775F()
{
  return dword_8937E8;
}

void *sub_407773()
{
  memset(dword_8937F4, 0, 0x100u);
  strcpy((char *)dword_8937F4, (const char *)dword_8937E8);
  strcat((char *)dword_8937F4, "chocobo/");
  return dword_8937F4;
}

void *sub_4077E2()
{
  memset(dword_8937F4, 0, 0x100u);
  strcpy((char *)dword_8937F4, (const char *)dword_8937E8);
  strcat((char *)dword_8937F4, "condor/");
  return dword_8937F4;
}

void *sub_407849()
{
  memset(dword_8937F4, 0, 0x100u);
  strcpy((char *)dword_8937F4, (const char *)dword_8937E8);
  strcat((char *)dword_8937F4, "highway/");
  return dword_8937F4;
}

void *sub_4078B8()
{
  memset(dword_8937F4, 0, 0x100u);
  strcpy((char *)dword_8937F4, (const char *)dword_8937E8);
  strcat((char *)dword_8937F4, "coaster/");
  return dword_8937F4;
}

void *sub_407927()
{
  memset(dword_8937F4, 0, 0x100u);
  strcpy((char *)dword_8937F4, (const char *)dword_8937E8);
  strcat((char *)dword_8937F4, "snobo/");
  return dword_8937F4;
}

void *sub_407998()
{
  memset(dword_8937F4, 0, 0x100u);
  strcpy((char *)dword_8937F4, (const char *)dword_8937E8);
  strcat((char *)dword_8937F4, "sub/");
  return dword_8937F4;
}

void sub_408060()
{
  word_BB99EC = 0;
  word_BB99E8 = 0;
}

int __cdecl sub_408077(unsigned __int16 a1)
{
  int result; // eax

  result = byte_8A174D & 0x30;
  if ( (byte_8A174D & 0x30) == 0 )
  {
    sub_4AB940(241, 0, 0, 0, 0, 0);
    return sub_4B3834(a1, 64, 127, 0);
  }
  return result;
}

void sub_4080BF()
{
  ;
}

char sub_4080C4()
{
  char result; // al

  dword_8937FC = 1;
  dword_BB9A54 = dword_8A13D8;
  word_BB7DEC = word_8A13DC;
  if ( !word_8A13DC )
    word_BB7DEC = 1;
  LOWORD(word_BB99E0) = word_8A13DE;
  word_BB91FC = word_8A13DE;
  word_BB919C = word_8A13E2;
  word_BB919E = word_8A13E4;
  word_BB91BA = word_8A13E6;
  word_BB91BC = (unsigned __int8)byte_8A13E8;
  result = byte_8A13E9;
  byte_BB9A6C = byte_8A13E9;
  byte_BB9A70 = byte_8A13EA;
  return result;
}

int sub_408166()
{
  int result; // eax

  if ( word_BB7DEC == 3 )
  {
    dword_8A13D8 = 2;
    word_8A13DC = 3;
  }
  else
  {
    dword_8A13D8 = 0;
    word_8A13DC = 1;
  }
  word_8A13DE = word_BB99E0;
  word_8A13E2 = dword_BB9A8C[34 * word_BB9A3C] >> 12;
  word_8A13E4 = dword_BB9A90[34 * word_BB9A3C] >> 12;
  result = 136 * word_BB9A3C;
  word_8A13E6 = *(__int16 *)((char *)&word_BB9AF8 + result);
  LOBYTE(result) = byte_BB9AB6[result];
  byte_8A13E8 = byte_BB9AB6[136 * word_BB9A3C];
  byte_8A13E9 = byte_BB9A6C;
  byte_8A13EA = byte_BB9A70;
  return result;
}

void sub_408231()
{
  dword_8937FC = 0;
  byte_8A16EC = 1;
  dword_8A13D8 = 0;
  word_8A13DC = 1;
  word_8A13DE = 116;
  word_8A13E2 = 0;
  word_8A13E4 = 0;
  word_8A13E6 = 0;
  byte_8A13E8 = 0;
  byte_8A13E9 = 0;
  byte_8A13EA = 0;
}

int sub_408293()
{
  sub_4AB940(244, 0, 0, 0, 0, 0);
  sub_4B4277();
  word_89A098 = 610;
  word_89A09A = byte_BB9A5C | word_BB91D6;
  byte_BB9A5C = 0;
  return sub_4AB940(245, 0, 0, 0, 0, 0);
}

int sub_40830C()
{
  char Buffer[256]; // [esp+Ch] [ebp-200h] BYREF
  char FileName[256]; // [esp+10Ch] [ebp-100h] BYREF

  strcpy(FileName, (const char *)dword_8937E8);
  strcat(FileName, "field/fchar.lgp");
  if ( sub_46D541(FileName, 0) )
  {
    strcpy(FileName, (const char *)dword_8937E8);
    strcat(FileName, "field/fonline.lgp");
    if ( sub_46D541(FileName, 1) )
    {
      return 1;
    }
    else
    {
      sprintf(Buffer, "Failed to load: %s\n", FileName);
      sub_45D200(Buffer);
      word_BB7DEC = 19;
      return 0;
    }
  }
  else
  {
    sprintf(Buffer, "Failed to load: %s\n", FileName);
    sub_45D200(Buffer);
    word_BB7DEC = 19;
    return 0;
  }
}

BOOL __cdecl sub_4084DC(int x, int y, LPCSTR lpString, HDC hdc)
{
  int v4; // eax

  SetBkColor(hdc, 0xFF0000u);
  SetTextColor(hdc, 0xFFFFu);
  v4 = lstrlenA(lpString);
  return TextOutA(hdc, x, y, lpString, v4);
}

void __cdecl sub_408520(void **Block, int a2)
{
  if ( Block )
  {
    sub_46C69D(Block[35], a2);
    sub_457F20(Block, (int)aCFf7SrcMainMai, 558);
  }
}

_DWORD *__cdecl sub_408557(_DWORD *a1)
{
  _DWORD *result; // eax
  int i; // [esp+0h] [ebp-4h]

  if ( a1 )
  {
    for ( i = 0; i < 22; ++i )
      a1[i + 13] = 0;
    a1[15] = 1;
    a1[16] = 1;
    a1[22] = 1;
    result = a1;
    a1[28] = 1;
    a1[29] = 1;
  }
  return result;
}

_DWORD *sub_4085BF()
{
  _DWORD *v1; // [esp+0h] [ebp-4h]

  v1 = (_DWORD *)sub_458339(1u, 0x90u, (int)aCFf7SrcMainMai_0, 593);
  if ( v1 )
  {
    *v1 = 1;
    v1[1] = 1;
    v1[3] = 4;
    v1[6] = 1;
    sub_408557(v1);
  }
  return v1;
}

int __cdecl sub_40861F(int a1)
{
  char v2[64]; // [esp+0h] [ebp-4Ch] BYREF
  int v3[3]; // [esp+40h] [ebp-Ch] BYREF

  v3[0] = 0;
  v3[1] = 1151090688;
  v3[2] = 1159479296;
  sub_473DE1(v3, v2);
  return sub_474C51(v2, a1);
}

int __cdecl sub_40865E(int a1)
{
  int result; // eax
  int v2[4]; // [esp+0h] [ebp-14h] BYREF
  int v3; // [esp+10h] [ebp-4h]

  v3 = sub_404D80();
  result = a1;
  *(_DWORD *)(a1 + 2632) = 1;
  if ( dword_725B08 )
  {
    memset(v2, 0, 12);
    v2[3] = 1065353216;
    switch ( v3 )
    {
      case 2:
        sub_458A5A(0, 0, 640, 480, a1);
        break;
      case 1:
        sub_458A5A(160, 120, 320, 240, a1);
        break;
      case 0:
        sub_458A5A(0, 0, 320, 240, a1);
        break;
    }
    sub_458B3C(v2, a1);
    sub_458A06(a1);
    sub_45897C(a1);
    sub_458A06(a1);
    result = sub_45897C(a1);
  }
  *(_DWORD *)(a1 + 2632) = 0;
  return result;
}

int __cdecl sub_40875A(int a1)
{
  int v2; // [esp+8h] [ebp-214h]
  HRESULT v3; // [esp+Ch] [ebp-210h]
  int v4; // [esp+10h] [ebp-20Ch]
  int v5; // [esp+14h] [ebp-208h]
  char Buffer[256]; // [esp+18h] [ebp-204h] BYREF
  int v7; // [esp+118h] [ebp-104h]
  char FileName[256]; // [esp+11Ch] [ebp-100h] BYREF

  v7 = 0;
  dword_946260 = 0;
  dword_8937F8 = 0;
  if ( word_BB7DEC == 19 )
    return 0;
  if ( dword_893800 )
    sub_4586CC();
  dword_893810 = (int)sub_4085BF();
  v5 = 0;
  if ( sub_470071(a1) )
  {
    sub_40D88D();
    sub_456180(a1);
    sub_4281BC();
    sub_4570A8(200, 50);
    sub_408231();
    if ( dword_8937D0 )
    {
      if ( !sub_4AEFC0(dword_8937D8, dword_8937D4, *(_DWORD *)(a1 + 92)) )
      {
        word_BB7DEC = 19;
        return 0;
      }
      sub_4B0861(43, 0);
    }
    if ( dword_8937E0 )
      sub_4AC340(dword_8937DC);
    strcpy(FileName, (const char *)dword_8937E8);
    strcat(FileName, "menu/menu_od.lgp");
    if ( !sub_46D541(FileName, 4) )
    {
      sprintf(Buffer, "Failed to load: %s\n", FileName);
      sub_45D200(Buffer);
      word_BB7DEC = 19;
      return 0;
    }
    strcpy(FileName, (const char *)dword_8937E8);
    strcat(FileName, "battle/bdemo2.lgp");
    if ( !sub_46D541(FileName, 2) )
    {
      sprintf(Buffer, "Failed to load: %s\n", FileName);
      sub_45D200(Buffer);
      word_BB7DEC = 19;
      return 0;
    }
    strcpy(FileName, (const char *)dword_8937E8);
    strcat(FileName, "battle/mdemo2.lgp");
    if ( !sub_46D541(FileName, 3) )
    {
      sprintf(Buffer, "Failed to load: %s\n", FileName);
      sub_45D200(Buffer);
      word_BB7DEC = 19;
      return 0;
    }
    if ( !sub_40830C() )
      return 0;
    v4 = sub_404D80();
    if ( *(_DWORD *)(a1 + 2656) == 1 )
      v7 = 1;
    sub_46C56A(0);
    sub_6A17C7(v7, v4);
    strcpy(FileName, (const char *)dword_8937E8);
    strcat(FileName, "field/");
    sub_6A1E7E(a1, FileName, FileName);
    sub_46C581(0x100000);
    sub_4D6327();
    v3 = CoInitialize(0);
    if ( v3 < 0 )
      sub_4D6320("Failed to initialize COM (0x%8.8X)\n", v3);
    while ( ShowCursor(0) >= 0 )
      ;
    if ( dword_893800 )
      sub_4586CC();
    sub_40861F(a1);
    v5 = 1;
    word_BB8C38 = 0;
    sub_401018();
    sub_40CA60();
    v2 = sub_404D80();
    sub_4242FE(v2);
    sub_417E1A();
    sub_408060();
    word_BB91D6 = 0;
    byte_BB91D3 = 0;
    sub_401000();
    sub_4AB940(192, 127, 0, 0, 0, 0);
  }
  sub_6A15CF();
  dword_8A13D0 = 0;
  dword_8A13C8 = 0;
  dword_8A13D4 = 0;
  dword_8A13CC = 0;
  dword_8937FC = 1;
  sub_4176F2();
  if ( !sub_40A690() )
    word_BB7DEC = 19;
  word_BB7DEC = 27;
  word_BB9194 = 0;
  sub_407610();
  ShowCursor(0);
  return v5;
}

int __cdecl sub_408C98(int a1)
{
  int v1; // ecx
  int result; // eax
  int pvParam; // [esp+0h] [ebp-4h] BYREF

  pvParam = v1;
  word_BB7DEC = 19;
  sub_40ADA0();
  SystemParametersInfoA(0x61u, 0, &pvParam, 0);
  sub_40A732();
  sub_6A2345(a1);
  sub_408520((void **)dword_893810, a1);
  sub_407457();
  sub_46E094();
  if ( dword_8937D0 )
  {
    sub_4B0929(43, 15);
    sub_4AF27D();
  }
  if ( dword_8937E0 )
    sub_4ACB1F();
  sub_4561E4();
  if ( word_BB9194 != 26 )
    sub_40CDB1(pvParam);
  sub_6A1F57();
  sub_4B6820();
  sub_47181B(a1);
  sub_4D8B81();
  CoUninitialize();
  result = sub_4D632C();
  if ( dword_893800 )
  {
    sub_4586CC();
    return sub_4586B9();
  }
  return result;
}

void __cdecl sub_408D62(int a1)
{
  sub_45D200(aEnteringMain);
  *(_DWORD *)(a1 + 2632) = 0;
  if ( byte_BB9199 == 5 || byte_BB9199 == 26 || byte_BB9199 == 10 )
  {
    byte_BB9A68 = 0;
    byte_BB9A74 = 0;
    word_BB9A78 = 0;
  }
  if ( byte_BB9199 == 26 )
  {
    byte_BB9199 = 0;
    word_BB7DEC = 26;
    sub_4AB940(192, 127, 0, 0, 0, 0);
    sub_408231();
    sub_401018();
    sub_417E1A();
    sub_408060();
  }
  else if ( byte_BB9199 == 10 )
  {
    byte_BB9199 = 0;
    word_BB7DEC = 25;
  }
}

int __cdecl sub_408E27(int a1)
{
  int result; // eax

  sub_45D200(aExitingMain);
  result = a1;
  *(_DWORD *)(a1 + 2632) = 1;
  return result;
}

void __cdecl sub_408E46(int a1)
{
  int v1; // eax
  CHAR v2[256]; // [esp+10h] [ebp-62Ch] BYREF
  char v3[256]; // [esp+110h] [ebp-52Ch] BYREF
  CHAR OutputString[256]; // [esp+210h] [ebp-42Ch] BYREF
  char FileName[256]; // [esp+310h] [ebp-32Ch] BYREF
  int v6; // [esp+410h] [ebp-22Ch]
  int v7; // [esp+414h] [ebp-228h]
  char Buffer[256]; // [esp+418h] [ebp-224h] BYREF
  CHAR MultiByteStr[256]; // [esp+518h] [ebp-124h] BYREF
  int v10; // [esp+618h] [ebp-24h]
  char v11[8]; // [esp+61Ch] [ebp-20h] BYREF
  int (__cdecl *v12)(int); // [esp+624h] [ebp-18h]
  int (*v13)(); // [esp+628h] [ebp-14h]
  int (__cdecl *v14)(int); // [esp+62Ch] [ebp-10h]
  void (*v15)(); // [esp+630h] [ebp-Ch]
  int (*v16)(); // [esp+634h] [ebp-8h]
  int v17; // [esp+638h] [ebp-4h]

  sub_45F117(v11, a1);
  v17 = 1;
  if ( !*(_DWORD *)(a1 + 32) )
  {
    if ( !sub_4D9AB6() )
    {
      v10 = 0;
      sub_4592A0(0, a1);
      *(_DWORD *)(a1 + 2632) = 1;
      v1 = sub_46F8CB(1);
      sub_4D934E(v1);
      sub_4592CB(a1);
    }
    if ( sub_4D9AC7() )
      sub_4D8FC7();
    switch ( word_BB7DEC )
    {
      case 1:
        sub_40865E(a1);
        sub_46C56A(0);
        sub_45901A(21, 1, a1);
        v14 = sub_6A249F;
        v15 = (void (*)())sub_6A2C19;
        v16 = sub_6A2C61;
        v12 = sub_6A1FA5;
        v13 = 0;
        sub_45F0C2(v11, a1);
        break;
      case 2:
        sub_40865E(a1);
        sub_46C56A(0);
        v14 = sub_4DBD63;
        v12 = sub_4DB5B0;
        v13 = (int (*)())sub_4DBB2D;
        v16 = 0;
        v15 = 0;
        sub_45F0C2(v11, a1);
        break;
      case 5:
        sub_40865E(a1);
        sub_46C56A(0);
        sub_408166();
        if ( byte_BB8C98 == 1 )
        {
          sub_417DBC();
          sub_4176F2();
          byte_BB8C98 = 0;
        }
        v12 = sub_418D84;
        v14 = sub_417FF7;
        v15 = (void (*)())sub_417FED;
        v16 = sub_417FF2;
        v13 = sub_418F87;
        sub_45F0C2(v11, a1);
        break;
      case 12:
        sub_40865E(a1);
        word_BB91BE = 2;
        word_BB9194 = 12;
        word_BB7DEC = 1;
        break;
      case 13:
        sub_408166();
        switch ( byte_BB9199 )
        {
          case 15:
            sub_417756();
            break;
          case 16:
            sub_417760();
            break;
          case 17:
            sub_41776A((__int16)word_BB919A);
            break;
          case 21:
            sub_417807();
            break;
          case 22:
            sub_417811((__int16)word_BB919A);
            break;
          case 23:
            sub_417822((__int16)word_BB919A);
            break;
          case 24:
            sub_4177A2();
            break;
          default:
            break;
        }
        if ( byte_BB9199 != 25 )
          sub_6B08A5();
        word_BB91BE = 2;
        word_BB9194 = 13;
        word_BB7DEC = 1;
        break;
      case 16:
        sub_4080BF();
        word_BB91BE = 2;
        word_BB9194 = 16;
        word_BB7DEC = 1;
        break;
      case 17:
        sub_46C56A(0);
        v12 = sub_418D84;
        v14 = sub_417FF7;
        v15 = (void (*)())sub_417FED;
        v16 = sub_417FF2;
        v13 = sub_418F87;
        sub_45F0C2(v11, a1);
        break;
      case 19:
        SendMessageA(*(HWND *)(a1 + 92), 0x10u, *(_DWORD *)(a1 + 96), 0);
        break;
      case 20:
        sub_46C56A(0);
        sub_4AB940(192, 127, 0, 0, 0, 0);
        sub_40CA60();
        v12 = sub_418D84;
        v14 = sub_417FF7;
        v15 = (void (*)())sub_417FED;
        v16 = sub_417FF2;
        v13 = sub_418F87;
        sub_45F0C2(v11, a1);
        break;
      case 21:
        sub_40865E(a1);
        sub_46C56A(0);
        if ( sub_4D9AD1() )
          sub_4D8B81();
        sub_4080C4();
        sub_4176F2();
        word_BB9194 = 0;
        if ( !sub_40A690() )
          word_BB7DEC = 19;
        break;
      case 22:
        sub_40865E(a1);
        sub_46C56A(0);
        sub_417E1A();
        sub_69DB9B();
        sub_408231();
        sub_4080C4();
        sub_4176F2();
        word_BB9194 = 0;
        if ( !sub_40A690() )
          word_BB7DEC = 19;
        break;
      case 23:
        v12 = sub_40164E;
        v14 = sub_4021E9;
        v13 = sub_40213B;
        v15 = sub_402EE2;
        v16 = (int (*)())sub_402EDD;
        sub_45F0C2(v11, a1);
        if ( !++byte_8A1404 )
          ++byte_8A1405;
        if ( byte_BB8C98 == 1 )
        {
          sub_417DBC();
          sub_4176F2();
          byte_BB8C98 = 0;
        }
        if ( word_BB9194 == 1 )
        {
          if ( !byte_BB7F7C )
          {
            if ( dword_BB91DC )
              sub_4AB940(20, dword_BB91DC, 0, 0, 0, 0);
            sub_408293();
          }
        }
        else
        {
          if ( dword_BB9190 >= 0 )
            byte_BB9A5C = 0;
          else
            byte_BB9A5C = 4;
          if ( (dword_BB9190 & 0x20000000) != 0 )
            byte_BB9A5C |= 2u;
          LOWORD(word_BB919A) = dword_BB9190;
          sub_408293();
        }
        break;
      case 25:
        v6 = 0;
        v7 = 0;
        if ( dword_8937F8 )
        {
          if ( sub_4D9AB6() )
          {
            sub_4D8B81();
            word_BB7DEC = 28;
          }
        }
        else
        {
          sub_40865E(a1);
          dword_8937F8 = 1;
          sub_4B06DF();
          word_BB7DEC = 25;
          strcpy(MultiByteStr, (const char *)dword_8937CC);
          strcat(MultiByteStr, "ending2.avi");
          sprintf(Buffer, "Opening movie: %s\n", MultiByteStr);
          sub_45D200(Buffer);
          sub_4D7DD5(MultiByteStr, 0, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 120));
          sub_4D8EC5();
        }
        word_BB9194 = 25;
        break;
      case 26:
        sub_40865E(a1);
        sub_40A732();
        v12 = (int (__cdecl *)(int))sub_406367;
        v14 = sub_4064D7;
        v15 = sub_406797;
        v16 = (int (*)())sub_406770;
        v13 = (int (*)())sub_406436;
        sub_45F0C2(v11, a1);
        break;
      case 27:
        sub_46C56A(0);
        strcpy(FileName, (const char *)dword_8937E8);
        strcat(FileName, "cd/cr_od.lgp");
        if ( sub_46D541(FileName, 15) )
        {
          if ( word_BB9194 == 26 )
            sub_6E7DA5(0);
          else
            sub_6E7DA5(7);
          sub_6E7D98(0);
          v12 = sub_6E751D;
          v14 = sub_6E7759;
          v15 = (void (*)())sub_6E774F;
          v16 = sub_6E7754;
          v13 = sub_6E76E4;
          sub_45F0C2(v11, a1);
        }
        else
        {
          sprintf(OutputString, "Failed to load: %s\n", FileName);
          sub_45D200(OutputString);
          word_BB7DEC = 19;
        }
        break;
      case 28:
        sub_46C56A(0);
        strcpy(v3, (const char *)dword_8937E8);
        strcat(v3, "cd/cr_od.lgp");
        if ( sub_46D541(v3, 15) )
        {
          sub_40865E(a1);
          sub_6E7D98(1);
          v12 = sub_6E751D;
          v14 = sub_6E7759;
          v15 = (void (*)())sub_6E774F;
          v16 = sub_6E7754;
          v13 = sub_6E76E4;
          sub_45F0C2(v11, a1);
        }
        else
        {
          sprintf(v2, "Failed to load: %s\n", v3);
          sub_45D200(v2);
          word_BB7DEC = 19;
        }
        break;
      default:
        return;
    }
  }
}

void __cdecl sub_4097B4(int a1)
{
  OutputDebugStringA(OutputString);
  if ( a1 )
  {
    sub_4D6320(aActivating);
    if ( !sub_4D8E61(0, a1) )
      OutputDebugStringA(aCouldNotRestor);
  }
  else
  {
    sub_4D6320(aDeactivating);
    if ( dword_93A240 )
      sub_4D8FC7(1, 0);
  }
}

void sub_409828()
{
  ;
}

BOOL sub_40982D()
{
  if ( word_BB7DEC == 23
    || word_BB7DEC == 24
    || word_BB7DEC == 25
    || word_BB7DEC == 27
    || word_BB7DEC == 28
    || word_BB7DEC == 10 )
  {
    return 0;
  }
  if ( word_BB7DEC == 1 )
    return sub_4D9AB6() != 0;
  return 1;
}

int __cdecl sub_4098A3(int a1, int a2, int a3, int a4)
{
  *(_DWORD *)(a4 + 2112) = (unsigned __int16)a3;
  *(_DWORD *)(a4 + 2116) = HIWORD(a3);
  return a1;
}

char __cdecl sub_4098EB(int a1, int a2, int a3, int a4)
{
  char result; // al

  result = a1;
  switch ( a1 )
  {
    case 256:
      if ( *(_DWORD *)(dword_893810 + 44) )
      {
        result = a2 - 13;
        switch ( a2 )
        {
          case 16:
            *(_DWORD *)(dword_893810 + 44) = 1;
            break;
          case 17:
            *(_DWORD *)(dword_893810 + 40) = 1;
            break;
          case 112:
            result = dword_893810;
            *(_DWORD *)(dword_893810 + 52) ^= 1u;
            break;
          default:
            return result;
        }
      }
      else
      {
        result = a2 - 13;
        switch ( a2 )
        {
          case 16:
            *(_DWORD *)(dword_893810 + 44) = 1;
            break;
          case 17:
            *(_DWORD *)(dword_893810 + 40) = 1;
            break;
          case 112:
            result = sub_46EC59(a4, aF1, aKeypress, 0);
            break;
          default:
            return result;
        }
      }
      break;
    case 257:
      if ( a2 == 16 )
      {
        *(_DWORD *)(dword_893810 + 44) = 0;
      }
      else if ( a2 == 17 )
      {
        result = dword_893810;
        *(_DWORD *)(dword_893810 + 40) = 0;
      }
      break;
    case 258:
      result = a2;
      if ( (_BYTE)a2 == 113 )
      {
        if ( *(_DWORD *)(dword_893810 + 40) )
          word_BB7DEC = 19;
      }
      break;
  }
  return result;
}

_DWORD *sub_409B43()
{
  _DWORD *result; // eax
  struct _STARTUPINFOA StartupInfo; // [esp+8h] [ebp-1A0h] BYREF
  DWORD ExitCode; // [esp+4Ch] [ebp-15Ch] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+50h] [ebp-158h] BYREF
  CHAR CommandLine[256]; // [esp+60h] [ebp-148h] BYREF
  HKEY phkResult; // [esp+160h] [ebp-48h] BYREF
  BYTE v6[4]; // [esp+164h] [ebp-44h] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+168h] [ebp-40h] BYREF
  DWORD Type; // [esp+188h] [ebp-20h] BYREF
  int v9; // [esp+18Ch] [ebp-1Ch]
  _DWORD *v10; // [esp+190h] [ebp-18h]
  DWORD cbData; // [esp+194h] [ebp-14h] BYREF
  BYTE Data[16]; // [esp+198h] [ebp-10h] BYREF

  v9 = 1;
  sub_4586A1(dword_893800);
  sub_406D70();
  strcpy((char *)dword_8937E8, aData);
  strcpy((char *)dword_8937C8, byte_89381C);
  dword_8937D0 = 1;
  dword_8937E0 = 1;
  strcpy((char *)dword_8937D8, (const char *)dword_8937E8);
  strcat((char *)dword_8937D8, "sound");
  strcpy((char *)dword_8937D4, (const char *)dword_8937E8);
  strcat((char *)dword_8937D4, "music");
  strcpy((char *)dword_8937DC, (const char *)dword_8937E8);
  strcat((char *)dword_8937DC, "midi");
  GlobalMemoryStatus(&Buffer);
  if ( Buffer.dwAvailPageFile < 0x2FAF080 )
  {
    MessageBoxA(0, Text, Caption, 0x10u);
    sub_407457();
    word_BB7DEC = 19;
  }
  if ( RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Graphics",
         0,
         1u,
         &phkResult) )
  {
    v9 = 0;
  }
  else
  {
    cbData = 16;
    if ( !RegQueryValueExA(phkResult, "DD_GUID", 0, &Type, Data, &cbData) && !cbData )
      v9 = 0;
    RegCloseKey(phkResult);
  }
  if ( RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Midi",
         0,
         1u,
         &phkResult) )
  {
    v9 = 0;
  }
  else
  {
    cbData = 4;
    if ( !RegQueryValueExA(phkResult, "MIDI_DeviceID", 0, &Type, v6, &cbData) && *(_DWORD *)v6 == -1 )
      v9 = 0;
    RegCloseKey(phkResult);
  }
  if ( RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Sound",
         0,
         1u,
         &phkResult) )
  {
    v9 = 0;
  }
  else
  {
    cbData = 16;
    if ( !RegQueryValueExA(phkResult, "Sound_GUID", 0, &Type, Data, &cbData) && !cbData )
      v9 = 0;
    RegCloseKey(phkResult);
  }
  v9 = 0;
  memset(&StartupInfo.lpReserved, 0, 0x40u);
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  StartupInfo.cb = 68;
  StartupInfo.lpReserved = 0;
  StartupInfo.lpReserved2 = 0;
  StartupInfo.cbReserved2 = 0;
  StartupInfo.lpDesktop = 0;
  StartupInfo.dwFlags = 0;
  strcpy(CommandLine, (const char *)dword_8937C8);
  strcat(CommandLine, "ff7config.exe");
  CreateProcessA(0, CommandLine, 0, 0, 1, 0x20u, 0, 0, &StartupInfo, &ProcessInformation);
  WaitForSingleObject(ProcessInformation.hProcess, 0xFFFFFFFF);
  GetExitCodeProcess(ProcessInformation.hProcess, &ExitCode);
  if ( ExitCode )
    word_BB7DEC = 19;
  result = (_DWORD *)sub_46EE81();
  v10 = result;
  if ( result )
  {
    v10[615] = 1119092736;
    v10[616] = 1123680256;
    v10[617] = 1195593728;
    sub_406AFB(v10);
    v10[636] = sub_40875A;
    v10[640] = sub_408E46;
    v10[637] = sub_408C98;
    v10[638] = sub_408D62;
    v10[639] = sub_408E27;
    v10[650] = sub_4097B4;
    v10[651] = sub_409828;
    v10[662] = sub_40C92D;
    v10[663] = sub_40982D;
    v10[641] = sub_4098A3;
    v10[642] = sub_4098EB;
    return (_DWORD *)sub_46E58E(v10);
  }
  return result;
}

int __cdecl sub_40A07C(LPBYTE lpData)
{
  HKEY phkResult; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h]

  v3 = 0;
  if ( !RegOpenKeyExA(
          HKEY_LOCAL_MACHINE,
          "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Sound",
          0,
          0x20019u,
          &phkResult) )
  {
    v3 = sub_40A4BD(phkResult, lpData);
    RegCloseKey(phkResult);
  }
  return v3;
}

int __cdecl sub_40A0CC(LPBYTE lpData)
{
  HKEY phkResult; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h]

  v3 = 1;
  if ( RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Sound",
         0,
         0x20019u,
         &phkResult) )
  {
    return 0;
  }
  v3 = sub_40A403(phkResult, lpData);
  RegCloseKey(phkResult);
  return v3;
}

int __cdecl sub_40A125(LPBYTE lpData)
{
  HKEY phkResult; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h]

  v3 = 1;
  if ( RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Midi",
         0,
         0x20019u,
         &phkResult) )
  {
    return 0;
  }
  v3 = sub_40A569(phkResult, lpData);
  RegCloseKey(phkResult);
  return v3;
}

int __cdecl sub_40A17E(LPBYTE lpData)
{
  HKEY phkResult; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h]

  v3 = 0;
  if ( !RegOpenKeyExA(
          HKEY_LOCAL_MACHINE,
          "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Midi",
          0,
          0x20019u,
          &phkResult) )
  {
    v3 = sub_40A513(phkResult, lpData);
    RegCloseKey(phkResult);
  }
  return v3;
}

int __cdecl sub_40A351(int a1)
{
  HKEY phkResult; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h]

  v3 = 1;
  if ( RegOpenKeyExA(
         HKEY_LOCAL_MACHINE,
         "Software\\Square Soft, Inc.\\Final Fantasy VII\\1.00\\Midi",
         0,
         0x20019u,
         &phkResult) )
  {
    return 0;
  }
  v3 = sub_40A5C7(phkResult, a1);
  RegCloseKey(phkResult);
  return v3;
}

int __cdecl sub_40A403(HKEY hKey, LPBYTE lpData)
{
  unsigned int i; // [esp+0h] [ebp-10h]
  int v4; // [esp+4h] [ebp-Ch]
  DWORD Type; // [esp+8h] [ebp-8h] BYREF
  DWORD cbData; // [esp+Ch] [ebp-4h] BYREF

  v4 = 1;
  cbData = 16;
  if ( RegQueryValueExA(hKey, "Sound_GUID", 0, &Type, lpData, &cbData) )
    return 0;
  if ( lpData && !cbData )
  {
    for ( i = 0; i < 0x10; ++i )
      lpData[i] = -1;
    return 0;
  }
  return v4;
}

BOOL __cdecl sub_40A47E(HKEY hKey, BYTE *lpData)
{
  if ( lpData )
    return RegSetValueExA(hKey, "Sound_GUID", 0, 3u, lpData, 0x10u) == 0;
  else
    return RegDeleteValueA(hKey, "Sound_GUID") == 0;
}

BOOL __cdecl sub_40A4BD(HKEY hKey, LPBYTE lpData)
{
  DWORD Type; // [esp+0h] [ebp-8h] BYREF
  DWORD cbData; // [esp+4h] [ebp-4h] BYREF

  cbData = 4;
  return RegQueryValueExA(hKey, "Options", 0, &Type, lpData, &cbData) == 0;
}

BOOL __cdecl sub_40A513(HKEY hKey, LPBYTE lpData)
{
  DWORD Type; // [esp+0h] [ebp-8h] BYREF
  DWORD cbData; // [esp+4h] [ebp-4h] BYREF

  cbData = 4;
  return RegQueryValueExA(hKey, "Options", 0, &Type, lpData, &cbData) == 0;
}

BOOL __cdecl sub_40A569(HKEY hKey, LPBYTE lpData)
{
  DWORD Type; // [esp+0h] [ebp-8h] BYREF
  DWORD cbData; // [esp+4h] [ebp-4h] BYREF

  cbData = 4;
  return RegQueryValueExA(hKey, "MIDI_DeviceID", 0, &Type, lpData, &cbData) == 0;
}

BOOL __cdecl sub_40A59C(HKEY hKey, BYTE *lpData)
{
  return RegSetValueExA(hKey, "MIDI_DeviceID", 0, 4u, lpData, 4u) == 0;
}

int __cdecl sub_40A5C7(HKEY hKey, int a2)
{
  BYTE Data[256]; // [esp+Ch] [ebp-108h] BYREF
  DWORD Type; // [esp+10Ch] [ebp-8h] BYREF
  DWORD cbData; // [esp+110h] [ebp-4h] BYREF

  cbData = 256;
  if ( RegQueryValueExA(hKey, "MIDI_data", 0, &Type, Data, &cbData) )
    return 0;
  strcpy((char *)a2, (const char *)Data);
  return 1;
}

BOOL __cdecl sub_40A644(HKEY hKey, BYTE *lpData)
{
  if ( lpData )
    return RegSetValueExA(hKey, "MIDI_data", 0, 1u, lpData, strlen((const char *)lpData) + 1) == 0;
  else
    return RegDeleteValueA(hKey, "MIDI_data") == 0;
}

BOOL sub_40A690()
{
  int v1; // [esp+0h] [ebp-8h]
  UINT uDelay; // [esp+4h] [ebp-4h]

  v1 = sub_46E59B();
  if ( *(_DWORD *)(v1 + 2656) == 1 )
  {
    if ( sub_404D80() == 2 )
    {
      uDelay = 40;
    }
    else if ( *(double *)(v1 + 48) >= 266000000.0 )
    {
      uDelay = 17;
    }
    else
    {
      uDelay = 25;
    }
  }
  else
  {
    uDelay = 17;
  }
  dword_893844 = 0;
  uTimerID = 0;
  InitializeCriticalSection(&CriticalSection);
  uTimerID = timeSetEvent(uDelay, 0x11u, fptc, 0, 1u);
  return uTimerID != 0;
}

void sub_40A732()
{
  if ( uTimerID )
  {
    timeKillEvent(uTimerID);
    uTimerID = 0;
    DeleteCriticalSection(&CriticalSection);
  }
}

void __stdcall fptc(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2)
{
  if ( !*(_DWORD *)(sub_46E59B() + 2644) )
  {
    EnterCriticalSection(&CriticalSection);
    ++dword_893844;
    if ( !byte_8A197C && !byte_8A1980 )
    {
      dword_8A13D0 += 1092;
      if ( HIWORD(dword_8A13D0) )
      {
        ++dword_8A13C8;
        dword_8A13D0 = (unsigned __int16)dword_8A13D0;
      }
      dword_8A13D4 += 1092;
      if ( HIWORD(dword_8A13D4) )
      {
        if ( (byte_8A144B & 2) != 0 )
        {
          ++dword_8A13CC;
        }
        else if ( dword_8A13CC )
        {
          --dword_8A13CC;
        }
        dword_8A13D4 = (unsigned __int16)dword_8A13D4;
      }
    }
    LeaveCriticalSection(&CriticalSection);
  }
}

int sub_40A864()
{
  return dword_893844;
}

int *sub_40A87A()
{
  unsigned int i; // [esp+0h] [ebp-10h]
  unsigned int j; // [esp+0h] [ebp-10h]
  int *v3; // [esp+8h] [ebp-8h]

  for ( i = 0; i < 0xA; ++i )
    dword_893868[i] = 0;
  if ( dword_893864 )
    return dword_893868;
  if ( byte_BB91D1 == 1 )
    return dword_893868;
  if ( sub_4D9AB6() )
    return dword_893868;
  if ( byte_BB91D1 != 1 )
  {
    if ( dword_893854 > dword_893858 )
      return dword_893868;
    if ( !dword_893848 )
      return dword_893868;
    v3 = (int *)(dword_893848 + 4 * ((unsigned int)(40 * sub_4D9A13()) >> 2));
    if ( v3 )
    {
      for ( j = 0; j < 0xA; ++j )
        dword_893868[j] = *v3++;
      dword_893854 += j;
    }
  }
  return dword_893868;
}

int __cdecl sub_40A990(int a1, int a2)
{
  int v3; // [esp+Ch] [ebp-228h]
  int MaxCharCount; // [esp+10h] [ebp-224h]
  const char *v5; // [esp+14h] [ebp-220h]
  int Offset; // [esp+20h] [ebp-214h]
  int v7; // [esp+24h] [ebp-210h]
  int v8; // [esp+28h] [ebp-20Ch]
  int v9; // [esp+2Ch] [ebp-208h]
  const char *v10; // [esp+30h] [ebp-204h]
  char FullPath[256]; // [esp+134h] [ebp-100h] BYREF
  int v12; // [esp+240h] [ebp+Ch]

  v9 = 0;
  dword_893854 = 0;
  dword_893864 = 0;
  v8 = (unsigned __int8)byte_8A16EC - 1;
  if ( byte_8A16EC == 1 && a2 == 36 )
    dword_893864 = 1;
  if ( byte_8A16EC == 2 && a2 == 42 )
    dword_893864 = 1;
  if ( byte_8A16EC == 3 && (a2 == 20 || a2 == 21 || a2 == 23 || a2 == 28) )
    dword_893864 = 1;
  if ( !dword_893864 )
  {
    if ( a2 < 0 || a2 > 19 )
    {
      v3 = a2 - 20;
      switch ( byte_8A16EC )
      {
        case 1:
          v5 = off_725FA8[v3];
          break;
        case 2:
          v5 = off_726030[v3];
          break;
        case 3:
          v5 = off_7260D8[v3];
          break;
      }
    }
    else
    {
      v5 = off_725F58[a2];
    }
    strcpy(FullPath, v5);
    Offset = sub_46DA02(FullPath, 14);
    if ( Offset )
    {
      MaxCharCount = sub_46E31A(Offset, 14);
      DstBuf = (void *)sub_458181(MaxCharCount + 2, (int)aCFf7SrcMovieSm, 229);
      sub_46E36E(Offset, 14, DstBuf, MaxCharCount);
      *((_BYTE *)DstBuf + MaxCharCount) = 0;
    }
    dword_893848 = (int)DstBuf;
    dword_893858 = MaxCharCount / 4 - 2;
  }
  if ( v8 == 1 )
  {
    if ( a2 == 42 )
    {
      v9 = 1;
      dword_893850 = 1;
    }
    else
    {
      dword_893850 = 0;
    }
  }
  if ( v8 == 2 )
  {
    if ( a2 == 20 || a2 == 21 || a2 == 23 || a2 == 28 )
    {
      v9 = 1;
      dword_893850 = 1;
    }
    else
    {
      dword_893850 = 0;
    }
  }
  if ( a2 < 0 || a2 > 19 )
  {
    v12 = a2 - 20;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v10 = off_725E88[v12];
      }
      else if ( v8 == 2 )
      {
        v10 = off_725F30[v12];
      }
    }
    else
    {
      v10 = off_725E00[v12];
    }
  }
  else
  {
    v10 = off_725DB0[a2];
  }
  strcpy(FullPath, (const char *)dword_8937CC);
  strcat(FullPath, v10);
  sub_4D6320("Opening movie: %s\n", FullPath);
  v7 = sub_46E59B();
  if ( !sub_4D7DD5(FullPath, v9, *(_DWORD *)(v7 + 116), *(_DWORD *)(v7 + 120)) )
    sub_40ADDA();
  return 1;
}

int __thiscall sub_40AD7D(void *this)
{
  int v1; // eax

  v1 = sub_46E59B(this);
  if ( sub_4D9AB6(v1) )
    sub_4D8EC5();
  return 1;
}

void sub_40ADA0()
{
  if ( dword_893848 )
  {
    sub_457F20(DstBuf, (int)aCFf7SrcMovieSm_0, 361);
    DstBuf = 0;
    dword_893848 = 0;
  }
}

int sub_40ADDA()
{
  sub_40ADA0();
  sub_4D8B81();
  word_BB9194 = 13;
  return ((int (__cdecl *)())sub_6A2490)();
}

int sub_40AE5B()
{
  int result; // eax
  int v1; // [esp+0h] [ebp-4h]

  v1 = 0;
  if ( sub_4D9AC7() && !sub_4D9AB6(0) || byte_BB9199 == 20 )
  {
    result = sub_40ADDA();
    word_BB9A48 = 0;
    word_BB91BE = 2;
  }
  else
  {
    if ( byte_BB9199 == 3 && !word_BB91BE )
    {
      if ( !sub_4D9AD1() )
        sub_40A990(v1, (__int16)word_BB919A);
      word_BB91BE = 1;
    }
    if ( word_BB9A48 == 1 )
    {
      word_BB9A48 = 0;
      word_BB91BE = 2;
    }
    result = byte_BB9199;
    if ( byte_BB9199 == 3 )
      word_BB91BE = 2;
    if ( byte_BB9199 == 4 )
    {
      word_BB91BE = 1;
      result = sub_40AD7D((void *)4);
      word_BB9A48 = 1;
    }
  }
  return result;
}

int __cdecl sub_40AFE0(float *a1, float *a2, float *a3)
{
  int result; // eax
  int i; // [esp+0h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    *a1 = *a2 * flt_8A1AA8 + *a3;
    a1[1] = a2[1] * flt_8A1AA8 + a3[1];
    a1[2] = a2[2] * flt_8A1AA8 + a3[2];
    a1 += 3;
    a2 += 3;
    result = i + 1;
  }
  return result;
}

_DWORD *sub_40B059()
{
  _DWORD *result; // eax
  _DWORD *v1; // ecx
  _DWORD *v2; // [esp+4h] [ebp-C8h]
  _DWORD *v3; // [esp+8h] [ebp-C4h]
  _DWORD *v4; // [esp+Ch] [ebp-C0h]
  _DWORD *v5; // [esp+10h] [ebp-BCh]
  _DWORD *v6; // [esp+14h] [ebp-B8h]
  _DWORD *v7; // [esp+18h] [ebp-B4h]
  _DWORD *v8; // [esp+1Ch] [ebp-B0h]
  _DWORD *v9; // [esp+20h] [ebp-ACh]
  _DWORD *v10; // [esp+24h] [ebp-A8h]
  _DWORD *v11; // [esp+28h] [ebp-A4h]
  _DWORD *v12; // [esp+2Ch] [ebp-A0h]
  _DWORD *v13; // [esp+30h] [ebp-9Ch]
  _DWORD *v14; // [esp+34h] [ebp-98h]
  _DWORD *v15; // [esp+38h] [ebp-94h]
  _DWORD *v16; // [esp+3Ch] [ebp-90h]
  _DWORD *v17; // [esp+40h] [ebp-8Ch]
  _DWORD *v18; // [esp+44h] [ebp-88h]
  _DWORD *v19; // [esp+48h] [ebp-84h]
  _DWORD *v20; // [esp+4Ch] [ebp-80h]
  _DWORD *v21; // [esp+50h] [ebp-7Ch]
  _DWORD *v22; // [esp+54h] [ebp-78h]
  _DWORD *v23; // [esp+58h] [ebp-74h]
  _DWORD *v24; // [esp+5Ch] [ebp-70h]
  _DWORD *v25; // [esp+60h] [ebp-6Ch]
  _DWORD *v26; // [esp+64h] [ebp-68h]
  _DWORD *v27; // [esp+68h] [ebp-64h]
  _DWORD *v28; // [esp+6Ch] [ebp-60h]
  _DWORD *v29; // [esp+70h] [ebp-5Ch]
  _DWORD *v30; // [esp+74h] [ebp-58h]
  _DWORD *v31; // [esp+78h] [ebp-54h]
  _DWORD *v32; // [esp+7Ch] [ebp-50h]
  _DWORD *v33; // [esp+80h] [ebp-4Ch]
  _DWORD *v34; // [esp+84h] [ebp-48h]
  _DWORD *v35; // [esp+88h] [ebp-44h]
  _DWORD *v36; // [esp+8Ch] [ebp-40h]
  _DWORD *v37; // [esp+90h] [ebp-3Ch]
  _DWORD *v38; // [esp+94h] [ebp-38h]
  _DWORD *v39; // [esp+98h] [ebp-34h]
  _DWORD *v40; // [esp+9Ch] [ebp-30h]
  _DWORD *v41; // [esp+A0h] [ebp-2Ch]
  _DWORD *v42; // [esp+A4h] [ebp-28h]
  int v43; // [esp+A8h] [ebp-24h] BYREF
  int v44; // [esp+ACh] [ebp-20h]
  int v45; // [esp+B4h] [ebp-18h]
  int v46; // [esp+B8h] [ebp-14h]
  int v47; // [esp+C0h] [ebp-Ch]
  int v48; // [esp+C4h] [ebp-8h]

  result = (_DWORD *)sub_46654B(14, dword_8A1AD0);
  if ( result )
  {
    sub_40AFE0((float *)&v43, flt_726EB8, (float *)&dword_726EA8);
    v42 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v42 = v43;
    v42[1] = v44;
    v42[2] = 1008981770;
    v42[3] = 1065353216;
    v42[4] = -2130771968;
    v42[5] = -16777216;
    v41 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v41 = v45;
    v41[1] = v46;
    v41[2] = 1008981770;
    v41[3] = 1065353216;
    v41[4] = -2139095040;
    v41[5] = -16777216;
    v40 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v40 = v47;
    v40[1] = v48;
    v40[2] = 1008981770;
    v40[3] = 1065353216;
    v40[4] = 0x80000000;
    v40[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726EE0, (float *)&dword_726EA8);
    v39 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v39 = v43;
    v39[1] = v44;
    v39[2] = 1008981770;
    v39[3] = 1065353216;
    v39[4] = -2130706433;
    v39[5] = -16777216;
    v38 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v38 = v45;
    v38[1] = v46;
    v38[2] = 1008981770;
    v38[3] = 1065353216;
    v38[4] = -2139062144;
    v38[5] = -16777216;
    v37 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v37 = v47;
    v37[1] = v48;
    v37[2] = 1008981770;
    v37[3] = 1065353216;
    v37[4] = 0x80000000;
    v37[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726F08, (float *)&dword_726EA8);
    v36 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v36 = v43;
    v36[1] = v44;
    v36[2] = 1008981770;
    v36[3] = 1065353216;
    v36[4] = 0x80000000;
    v36[5] = -16777216;
    v35 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v35 = v45;
    v35[1] = v46;
    v35[2] = 1008981770;
    v35[3] = 1065353216;
    v35[4] = 0x80000000;
    v35[5] = -16777216;
    v34 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v34 = v47;
    v34[1] = v48;
    v34[2] = 1008981770;
    v34[3] = 1065353216;
    v34[4] = 0x80000000;
    v34[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726F30, (float *)&dword_726EA8);
    v33 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v33 = v43;
    v33[1] = v44;
    v33[2] = 1008981770;
    v33[3] = 1065353216;
    v33[4] = 0x80000000;
    v33[5] = -16777216;
    v32 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v32 = v45;
    v32[1] = v46;
    v32[2] = 1008981770;
    v32[3] = 1065353216;
    v32[4] = 0x80000000;
    v32[5] = -16777216;
    v31 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v31 = v47;
    v31[1] = v48;
    v31[2] = 1008981770;
    v31[3] = 1065353216;
    v31[4] = 0x80000000;
    v31[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726F58, (float *)&dword_726EA8);
    v30 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v30 = v43;
    v30[1] = v44;
    v30[2] = 1008981770;
    v30[3] = 1065353216;
    v30[4] = 0x80000000;
    v30[5] = -16777216;
    v29 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v29 = v45;
    v29[1] = v46;
    v29[2] = 1008981770;
    v29[3] = 1065353216;
    v29[4] = 0x80000000;
    v29[5] = -16777216;
    v28 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v28 = v47;
    v28[1] = v48;
    v28[2] = 1008981770;
    v28[3] = 1065353216;
    v28[4] = 0x80000000;
    v28[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726F80, (float *)&dword_726EA8);
    v27 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v27 = v43;
    v27[1] = v44;
    v27[2] = 1008981770;
    v27[3] = 1065353216;
    v27[4] = 0x80000000;
    v27[5] = -16777216;
    v26 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v26 = v45;
    v26[1] = v46;
    v26[2] = 1008981770;
    v26[3] = 1065353216;
    v26[4] = 0x80000000;
    v26[5] = -16777216;
    v25 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v25 = v47;
    v25[1] = v48;
    v25[2] = 1008981770;
    v25[3] = 1065353216;
    v25[4] = 0x80000000;
    v25[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726FA8, (float *)&dword_726EA8);
    v24 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v24 = v43;
    v24[1] = v44;
    v24[2] = 1008981770;
    v24[3] = 1065353216;
    v24[4] = 0x80000000;
    v24[5] = -16777216;
    v23 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v23 = v45;
    v23[1] = v46;
    v23[2] = 1008981770;
    v23[3] = 1065353216;
    v23[4] = 0x80000000;
    v23[5] = -16777216;
    v22 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v22 = v47;
    v22[1] = v48;
    v22[2] = 1008981770;
    v22[3] = 1065353216;
    v22[4] = 0x80000000;
    v22[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726FD0, (float *)&dword_726EA8);
    v21 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v21 = v43;
    v21[1] = v44;
    v21[2] = 1008981770;
    v21[3] = 1065353216;
    v21[4] = 0x80000000;
    v21[5] = -16777216;
    v20 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v20 = v45;
    v20[1] = v46;
    v20[2] = 1008981770;
    v20[3] = 1065353216;
    v20[4] = 0x80000000;
    v20[5] = -16777216;
    v19 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v19 = v47;
    v19[1] = v48;
    v19[2] = 1008981770;
    v19[3] = 1065353216;
    v19[4] = 0x80000000;
    v19[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_726FF8, (float *)&dword_726EA8);
    v18 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v18 = v43;
    v18[1] = v44;
    v18[2] = 1008981770;
    v18[3] = 1065353216;
    v18[4] = 0x80000000;
    v18[5] = -16777216;
    v17 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v17 = v45;
    v17[1] = v46;
    v17[2] = 1008981770;
    v17[3] = 1065353216;
    v17[4] = 0x80000000;
    v17[5] = -16777216;
    v16 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v16 = v47;
    v16[1] = v48;
    v16[2] = 1008981770;
    v16[3] = 1065353216;
    v16[4] = 0x80000000;
    v16[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_727020, (float *)&dword_726EA8);
    v15 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v15 = v43;
    v15[1] = v44;
    v15[2] = 1008981770;
    v15[3] = 1065353216;
    v15[4] = 0x80000000;
    v15[5] = -16777216;
    v14 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v14 = v45;
    v14[1] = v46;
    v14[2] = 1008981770;
    v14[3] = 1065353216;
    v14[4] = 0x80000000;
    v14[5] = -16777216;
    v13 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v13 = v47;
    v13[1] = v48;
    v13[2] = 1008981770;
    v13[3] = 1065353216;
    v13[4] = 0x80000000;
    v13[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_727048, (float *)&dword_726EA8);
    v12 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v12 = v43;
    v12[1] = v44;
    v12[2] = 1008981770;
    v12[3] = 1065353216;
    v12[4] = 0x80000000;
    v12[5] = -16777216;
    v11 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v11 = v45;
    v11[1] = v46;
    v11[2] = 1008981770;
    v11[3] = 1065353216;
    v11[4] = 0x80000000;
    v11[5] = -16777216;
    v10 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v10 = v47;
    v10[1] = v48;
    v10[2] = 1008981770;
    v10[3] = 1065353216;
    v10[4] = 0x80000000;
    v10[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_727070, (float *)&dword_726EA8);
    v9 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v9 = v43;
    v9[1] = v44;
    v9[2] = 1008981770;
    v9[3] = 1065353216;
    v9[4] = 0x80000000;
    v9[5] = -16777216;
    v8 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v8 = v45;
    v8[1] = v46;
    v8[2] = 1008981770;
    v8[3] = 1065353216;
    v8[4] = 0x80000000;
    v8[5] = -16777216;
    v7 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v7 = v47;
    v7[1] = v48;
    v7[2] = 1008981770;
    v7[3] = 1065353216;
    v7[4] = 0x80000000;
    v7[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_727098, (float *)&dword_726EA8);
    v6 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v6 = v43;
    v6[1] = v44;
    v6[2] = 1008981770;
    v6[3] = 1065353216;
    v6[4] = 0x80000000;
    v6[5] = -16777216;
    v5 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v5 = v45;
    v5[1] = v46;
    v5[2] = 1008981770;
    v5[3] = 1065353216;
    v5[4] = 0x80000000;
    v5[5] = -16777216;
    v4 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 64);
    *v4 = v47;
    v4[1] = v48;
    v4[2] = 1008981770;
    v4[3] = 1065353216;
    v4[4] = 0x80000000;
    v4[5] = -16777216;
    *(_DWORD *)(dword_8A1AD0 + 112) += *(_DWORD *)(dword_8A1AD0 + 64);
    sub_40AFE0((float *)&v43, flt_7270C0, (float *)&dword_726EA8);
    v3 = *(_DWORD **)(dword_8A1AD0 + 112);
    *v3 = v43;
    v3[1] = v44;
    v3[2] = 1008981770;
    v3[3] = 1065353216;
    v3[4] = 0x80000000;
    v3[5] = -16777216;
    v2 = (_DWORD *)(*(_DWORD *)(dword_8A1AD0 + 112) + 32);
    *v2 = v45;
    v2[1] = v46;
    v2[2] = 1008981770;
    v2[3] = 1065353216;
    v2[4] = 0x80000000;
    v2[5] = -16777216;
    v1 = *(_DWORD **)(dword_8A1AD0 + 112);
    v1[16] = v47;
    v1[17] = v48;
    v1[18] = 1008981770;
    v1 += 16;
    v1[3] = 1065353216;
    v1[4] = 0x80000000;
    result = v1;
    v1[5] = -16777216;
  }
  return result;
}

int sub_40C02C()
{
  int result; // eax

  result = sub_404D80();
  if ( result )
  {
    if ( result == 1 )
    {
      dword_8A1B6C = 160;
      dword_8A1B70 = 120;
      dword_8A1B74 = 320;
      dword_8A1B78 = 240;
      dword_8A1E1C = 1;
    }
    else
    {
      dword_8A1B6C = 0;
      dword_8A1B70 = 0;
      dword_8A1B74 = 640;
      dword_8A1B78 = 480;
      dword_8A1E1C = 0;
    }
  }
  else
  {
    dword_8A1B6C = 0;
    dword_8A1B70 = 0;
    dword_8A1B74 = 320;
    dword_8A1B78 = 240;
    dword_8A1E1C = 1;
  }
  return result;
}

int sub_40C0E2()
{
  int result; // eax
  int v1; // [esp+0h] [ebp-1Ch]
  int v2; // [esp+4h] [ebp-18h]
  int j; // [esp+Ch] [ebp-10h]
  int i; // [esp+Ch] [ebp-10h]
  int v5; // [esp+14h] [ebp-8h]
  int v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]
  int v8; // [esp+18h] [ebp-4h]

  if ( dword_8A1AC8 != 1 )
  {
    dword_8A1AB0 = 1;
    dword_8A1AC8 = 1;
  }
  sub_40B059();
  if ( dword_8A1E1C == 1 )
  {
    sub_4207DD(&off_726E38, 1036831949);
    for ( i = 0; i < 3; ++i )
      sub_42E09A(
        (__int16)off_726E38 + 50,
        SHIWORD(off_726E38) + 13 * i + 9,
        (char *)&unk_726E40 + 30 * i,
        7,
        1008981770);
    v8 = (__int16)off_726E38 + 50 - sub_42DAC8(a9esO) / 4;
    sub_42E09A(v8, SHIWORD(off_726E38) + 78, a9esO, dword_8A1AB0 != 0 ? 0 : 7, 1008981770);
    v6 = (__int16)off_726E38 + word_726E3C - 50 - sub_42DAC8(7499428) / 4;
    sub_42E09A(v6, SHIWORD(off_726E38) + 78, 7499428, dword_8A1AB0 != 0 ? 7 : 0, 1008981770);
    if ( dword_8A1AB0 )
      v1 = v6 - 25;
    else
      v1 = v8 - 25;
    sub_42373D(v1, SHIWORD(off_726E38) + 82, 981668463);
  }
  else
  {
    sub_41A6E0(&off_726E30, 1036831949);
    for ( j = 0; j < 3; ++j )
      sub_429073(
        (__int16)off_726E30 + 100,
        SHIWORD(off_726E30) + 26 * j + 18,
        (char *)&unk_726E40 + 30 * j,
        7,
        1008981770);
    v7 = (__int16)off_726E30 + 100 - sub_428A12(a9esO) / 4;
    sub_429073(v7, SHIWORD(off_726E30) + 156, a9esO, dword_8A1AB0 != 0 ? 0 : 7, 1008981770);
    v5 = (__int16)off_726E30 + word_726E34 - 100 - sub_428A12(7499428) / 4;
    sub_429073(v5, SHIWORD(off_726E30) + 156, 7499428, dword_8A1AB0 != 0 ? 7 : 0, 1008981770);
    if ( dword_8A1AB0 )
      v2 = v5 - 50;
    else
      v2 = v7 - 50;
    sub_41DD78(v2, SHIWORD(off_726E30) + 164, 981668463);
  }
  if ( sub_428961(0x8000) || sub_428961(0x2000) )
  {
    sub_4B039F(1);
    dword_8A1AB0 ^= 1u;
  }
  result = sub_456B44(32);
  if ( result )
  {
    result = sub_4B039F(1);
    dword_8A1AC4 = 1;
    dword_8A1AC8 = 0;
  }
  return result;
}

_DWORD *__cdecl sub_40C454(_DWORD *a1)
{
  _DWORD *result; // eax

  dword_8A1AB4 = a1[530];
  dword_8A1AB8 = a1[531];
  dword_8A1ABC = a1[532];
  result = a1;
  dword_8A1AC0 = a1[533];
  return result;
}

int __cdecl sub_40C494(int a1)
{
  return sub_458A5A(dword_8A1AB4, dword_8A1AB8, dword_8A1ABC, dword_8A1AC0, a1);
}
