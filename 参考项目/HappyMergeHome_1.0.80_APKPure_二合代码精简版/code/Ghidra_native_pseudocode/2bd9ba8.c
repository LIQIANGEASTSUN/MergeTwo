
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be9ba8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  pcVar7 = (char *)(_UNK_02be9ddc + 0x2be9bc4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be9de0 + 0x2be9bd8));
    func_0x01438628(*(undefined4 *)(_UNK_02be9de4 + 0x2be9be4));
    func_0x01438628(*(undefined4 *)(_UNK_02be9de8 + 0x2be9bf0));
    func_0x01438628(*(undefined4 *)(_UNK_02be9dec + 0x2be9bfc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f85,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f85,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x014386f0(**(undefined4 **)(_UNK_02be9df0 + 0x2be9c60),param_2);
  piVar9 = param_1 + 0x11;
  *piVar9 = iVar1;
  func_0x014385cc(piVar9);
  iVar1 = param_1[0x13] + -1;
  piStack_28 = piVar9;
  if (-1 < iVar1) {
    iVar5 = param_1[0x12];
    do {
      if (0 < iVar5) {
        iVar10 = 0;
        do {
          piVar9 = (int *)*piStack_28;
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02be9df4 + 0x2be9ca8));
          func_0x02c3f5e0(iVar2,0);
          if (piVar9 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar2 != 0) &&
             (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar9 + 0x20)), iVar3 == 0)) {
            uVar6 = func_0x01438904();
            func_0x01438790(uVar6,0);
          }
          uVar8 = iVar1 * iVar5 + iVar10;
          if ((uint)piVar9[3] <= uVar8) {
            func_0x014388e8();
          }
          piVar9[uVar8 + 4] = iVar2;
          func_0x014385cc(piVar9 + uVar8 + 4,iVar2);
          if (*(int *)(**(int **)(_UNK_02be9df8 + 0x2be9d28) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02be9dfc + 0x2be9d44));
          iVar2 = param_1[4];
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = FUN_02bad204(iVar5,uVar8,iVar2,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uStack_40 = 0;
          uStack_3c = 9;
          uStack_38 = 0xffffffff;
          uStack_34 = 0xffffffff;
          func_0x02bed810(param_1,uVar8,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
          iVar5 = param_1[0x12];
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar5);
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02be9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,0,*(undefined4 *)(*param_1 + 0x124));
  return;
}

