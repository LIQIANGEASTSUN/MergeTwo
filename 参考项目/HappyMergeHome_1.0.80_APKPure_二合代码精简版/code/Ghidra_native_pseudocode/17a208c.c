
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017b208c(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r6;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar10 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
    iVar8 = iRam00000008;
    iVar3 = *(int *)(param_1 + 0xc);
    iVar5 = iVar3;
    if (iVar3 == 0) {
      func_0x014388e4();
      iVar4 = 0;
      iVar5 = *(int *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0xc) == 0) goto LAB_017b2154;
    }
  }
  else {
    iVar8 = *(int *)(iVar3 + 8);
    iVar5 = iVar3;
  }
  iVar5 = *(int *)(iVar5 + 0xc);
  iVar8 = iVar8 + -1;
  iVar4 = *(int *)(iVar3 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar5 + 0x4c);
  if (iVar10 == iVar8) {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar5 = iVar6;
    if (iVar6 == 0) {
      func_0x014388e4();
      iVar5 = *(int *)(param_1 + 0xc);
      unaff_r6 = 0;
      if (iVar5 == 0) {
LAB_017b2154:
        iVar3 = func_0x014388e4();
        uVar11 = 0x17b2158;
        pcVar1 = (char *)(_UNK_017b229c + 0x17b2170);
        if (*pcVar1 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_017b22a0 + 0x17b2184));
          func_0x01438628(*(undefined4 *)(_UNK_017b22a4 + 0x17b2190));
          func_0x01438628(*(undefined4 *)(_UNK_017b22a8 + 0x17b219c));
          func_0x01438628(*(undefined4 *)(_UNK_017b22ac + 0x17b21a8));
          *pcVar1 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_017b22b0 + 0x17b21bc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_017b22b4 + 0x17b21d8));
        uVar7 = *(undefined4 *)(iVar3 + 8);
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        uVar2 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02b82850(iVar5,uVar7,uVar9,uVar2,1,0xffffffff,0xffffffff,0,param_1,iVar4,unaff_r6,
                        iVar8,iVar10,uVar11);
        if (*(int *)(**(int **)(_UNK_017b22b8 + 0x17b2234) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_017b22bc + 0x17b2250));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x0299ab14(iVar10,0);
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x017b2290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
        return;
      }
    }
    iVar10 = *(int *)(iVar5 + 8);
    iVar8 = *(int *)(iVar6 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar3 = (iVar3 + iVar8) - iVar10;
  }
  else if (iVar4 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar4 + 0x4c) = iVar3 + 1;
  return;
}

