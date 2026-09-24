
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016fac60(int param_1)

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
      if (*(int *)(param_1 + 0xc) == 0) goto LAB_016fad28;
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
LAB_016fad28:
        iVar3 = func_0x014388e4();
        uVar11 = 0x16fad2c;
        pcVar1 = (char *)(_UNK_016fae70 + 0x16fad44);
        if (*pcVar1 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_016fae74 + 0x16fad58));
          func_0x01438628(*(undefined4 *)(_UNK_016fae78 + 0x16fad64));
          func_0x01438628(*(undefined4 *)(_UNK_016fae7c + 0x16fad70));
          func_0x01438628(*(undefined4 *)(_UNK_016fae80 + 0x16fad7c));
          *pcVar1 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_016fae84 + 0x16fad90) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_016fae88 + 0x16fadac));
        uVar7 = *(undefined4 *)(iVar3 + 8);
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        uVar2 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02b82850(iVar5,uVar7,uVar9,uVar2,1,0xffffffff,0xffffffff,0,param_1,iVar4,unaff_r6,
                        iVar8,iVar10,uVar11);
        if (*(int *)(**(int **)(_UNK_016fae8c + 0x16fae08) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_016fae90 + 0x16fae24));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x0299ab14(iVar10,0);
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x016fae64. Too many branches */
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

