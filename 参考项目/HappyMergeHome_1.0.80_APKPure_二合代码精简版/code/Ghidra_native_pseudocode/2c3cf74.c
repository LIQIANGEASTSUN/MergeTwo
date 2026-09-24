
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c4cf74(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
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
  
  pcVar6 = (char *)(_UNK_02c4d0c4 + 0x2c4cf8c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4d0c8 + 0x2c4cfa0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4d0cc + 0x2c4cfac));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d09,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_02c4d0d0 + 0x2c4d008);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar7 = *(undefined4 **)(_UNK_02c4d0d4 + 0x2c4d024);
    iVar2 = func_0x014e9518(*puVar7);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = 0;
    iVar4 = func_0x029a6fa8(iVar2,param_2,0);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0xec);
      param_2 = iVar4;
    }
    if ((iVar4 != 0 && iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 2)) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar7);
      uVar5 = *(undefined4 *)(param_2 + 0x30);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x029b0f58(iVar2,uVar5,0);
      uVar1 = (uint)(iVar2 != 0);
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x5d09,0);
  if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar1 = func_0x024f56e0(&uStack_38,0,0);
  return uVar1;
}

