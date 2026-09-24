
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02be5aa8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02be5c84 + 0x2be5ac0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be5c88 + 0x2be5ad4));
    func_0x01438628(*(undefined4 *)(_UNK_02be5c8c + 0x2be5ae0));
    func_0x01438628(*(undefined4 *)(_UNK_02be5c90 + 0x2be5aec));
    func_0x01438628(*(undefined4 *)(_UNK_02be5c94 + 0x2be5af8));
    func_0x01438628(*(undefined4 *)(_UNK_02be5c98 + 0x2be5b04));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4f8f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4f8f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar4,0,0);
    iVar1 = func_0x024f56e0(&uStack_38,0,0);
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_02be5c9c + 0x2be5b60) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be5ca0 + 0x2be5b7c));
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar8,0);
  if (*(int *)(**(int **)(_UNK_02be5ca4 + 0x2be5bc0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_02be5ca8 + 0x2be5bdc));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x02be5cb0(iVar7,iVar1);
  iVar2 = 0;
  if (iVar1 != 0 && iVar7 != 0) {
    uVar3 = *(uint *)(iVar7 + 0xc);
    if ((int)uVar3 < 1) {
      return 1;
    }
    uVar6 = 0;
    puVar9 = *(undefined4 **)(_UNK_02be5cac + 0x2be5c34);
    do {
      if (uVar3 <= uVar6) {
        func_0x014388e8(iVar2);
      }
      uVar8 = *(undefined4 *)(iVar7 + 0x10 + uVar6 * 4);
      iVar1 = *(int *)(param_2 + 0x84);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x046c26fc(iVar1,uVar8,*puVar9);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(iVar7 + 0xc);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar3);
  }
  return iVar2;
}

