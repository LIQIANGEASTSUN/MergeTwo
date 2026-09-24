
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd6ae8(undefined4 param_1,undefined4 param_2,int param_3,float *param_4,undefined4 param_5
                )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  
  pcVar6 = (char *)(_UNK_02bd6f34 + 0x2bd6b08);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd6f38 + 0x2bd6b20));
    func_0x01438628(*(undefined4 *)(_UNK_02bd6f3c + 0x2bd6b2c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd6f40 + 0x2bd6b38));
    func_0x01438628(*(undefined4 *)(_UNK_02bd6f44 + 0x2bd6b44));
    func_0x01438628(*(undefined4 *)(_UNK_02bd6f48 + 0x2bd6b50));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd77,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar9 = *(undefined4 **)(_UNK_02bd6f4c + 0x2bd6bf0);
    iVar3 = func_0x03b780b0(iVar1,param_2,*puVar9);
    iVar1 = iVar3;
    if (iVar3 == 0) {
      iVar1 = func_0x014388e4();
    }
    iVar2 = 0;
    if (param_3 != 0) {
      iVar1 = *(int *)(iVar3 + 8);
    }
    if (param_3 != 0 && iVar1 != -1) {
      if (*(int *)(**(int **)(_UNK_02bd6f50 + 0x2bd6c30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd6f54 + 0x2bd6c4c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = 0;
      iVar1 = func_0x02c4acc8(iVar1,param_3,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_02bd6f58 + 0x2bd6c88) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd6f5c + 0x2bd6ca8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar12 = func_0x026ffbe0(iVar1,0);
        iVar1 = FUN_02bad050(param_1,param_5);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar12 = func_0x014e6e04((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),1000,0);
        uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
        if (uVar4 <= *(uint *)(iVar1 + 0x24) &&
            (uint)(*(uint *)(iVar1 + 0x20) <= (uint)uVar12) <= uVar4 - *(uint *)(iVar1 + 0x24)) {
          iVar1 = FUN_02bad050(param_1,param_5);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,param_2,*puVar9);
          if (*(int *)(**(int **)(_UNK_02bd6f60 + 0x2bd6d8c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd6f64 + 0x2bd6da8));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar12 = func_0x026ffbe0(iVar3,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar12 = func_0x014e6e04((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),1000,0);
          uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
          FUN_026f6e40(iVar1,uVar5,(int)uVar12,uVar5,0);
        }
        if (*(int *)(**(int **)(_UNK_02bd6f68 + 0x2bd6e14) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd6f6c + 0x2bd6e30));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar12 = func_0x026ffbe0(iVar1,0);
        iVar1 = FUN_02bad050(param_1,param_5);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bd6f70 + 0x2bd6e94));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar2 = 0;
        uVar12 = func_0x014e6e04((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),1000,0);
        uVar8 = (uint)uVar12 - *(uint *)(iVar1 + 0x20);
        uVar7 = (int)((ulonglong)uVar12 >> 0x20) -
                (*(int *)(iVar1 + 0x24) + (uint)((uint)uVar12 < *(uint *)(iVar1 + 0x20)));
        uVar4 = FUN_02bd6714(param_1,param_3);
        if (uVar7 <= (uint)((int)uVar4 >> 0x1f) &&
            (uint)(uVar4 <= uVar8) <= uVar7 - ((int)uVar4 >> 0x1f)) {
          iVar2 = FUN_02bd6714(param_1,param_3);
          iVar2 = iVar2 - uVar8;
        }
        uVar5 = FUN_02bd6714(param_1,param_3);
        dVar11 = (double)func_0x014e63e0(uVar8,uVar7);
        fVar10 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
        *param_4 = (float)dVar11 / fVar10;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd77,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x028935a8(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return iVar2;
}

