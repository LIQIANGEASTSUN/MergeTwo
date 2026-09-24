
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd8b98(undefined4 param_1,undefined4 param_2,int param_3,float *param_4,undefined4 param_5
                )

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r9;
  uint in_fpscr;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  float fStack_28;
  
  pcVar6 = (char *)(_UNK_02bd8f1c + 0x2bd8bb8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd8f20 + 0x2bd8bd0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8f24 + 0x2bd8bdc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8f28 + 0x2bd8be8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8f2c + 0x2bd8bf4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8f30 + 0x2bd8c00));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8f34 + 0x2bd8c0c));
    *pcVar6 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x02953fd4(0xd76,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad204(param_1,param_2,param_5);
    if (param_3 != 0) {
      unaff_r9 = iVar1;
    }
    if (param_3 != 0 && iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd8f38 + 0x2bd8cb0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8f3c + 0x2bd8ccc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar7 = 0;
      iVar1 = func_0x02c4aa30(iVar1,param_3,0);
      if ((iVar1 != 0) && (iVar1 = FUN_02bd72b0(param_1,param_2,param_3,param_5), iVar1 < 1)) {
        if (*(int *)(**(int **)(_UNK_02bd8f40 + 0x2bd8d24) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8f44 + 0x2bd8d40));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        iVar1 = func_0x02c4b048(iVar1,param_3,unaff_r9,0);
        if (iVar1 == 0) {
          if (*(int *)(**(int **)(_UNK_02bd8f48 + 0x2bd8d80) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8f4c + 0x2bd8da0));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar10 = func_0x026ffbe0(iVar1,0);
          uVar2 = *(uint *)(unaff_r9 + 0x18);
          uVar5 = *(uint *)(unaff_r9 + 0x1c);
          iVar1 = FUN_02bd84dc(param_1,param_3,unaff_r9);
          uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
          uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
          if (*(int *)(**(int **)(_UNK_02bd8f50 + 0x2bd8e0c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8f54 + 0x2bd8e28));
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x02c4baac(iVar7,param_3,0);
          if ((iVar7 != 0) && (*(char *)(param_3 + 0x59) == '\0')) {
            uVar2 = *(uint *)(unaff_r9 + 0x48);
            uVar5 = *(uint *)(unaff_r9 + 0x4c);
          }
          fStack_28 = (float)VectorSignedToFloat((uint)uVar10 - uVar2,(byte)(in_fpscr >> 0x16) & 3);
          if (uVar4 <= uVar5 && (uint)(uVar2 <= (uint)uVar10) <= uVar4 - uVar5) {
            uVar3 = func_0x0152542c(&fStack_28,0);
            uVar3 = func_0x014e9568(**(undefined4 **)(_UNK_02bd8f58 + 0x2bd8ea8),uVar3,0);
            if (*(int *)(**(int **)(_UNK_02bd8f5c + 0x2bd8ebc) + 0x74) == 0) {
              func_0x014387a4();
            }
            func_0x024ef174(uVar3,0);
          }
          iVar9 = (int)fStack_28;
          iVar7 = 0;
          uVar2 = in_fpscr & 0xfffffff | (uint)(fStack_28 == _UNK_02bd8f18) << 0x1e;
          fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(uVar2 >> 0x16) & 3);
          if (SUB41(uVar2 >> 0x1e,0)) {
            iVar9 = -0x80000000;
          }
          *param_4 = fStack_28 / fVar8;
          if (fStack_28 < fVar8) {
            iVar7 = iVar1 - iVar9;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd76,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x028935a8(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return iVar7;
}

