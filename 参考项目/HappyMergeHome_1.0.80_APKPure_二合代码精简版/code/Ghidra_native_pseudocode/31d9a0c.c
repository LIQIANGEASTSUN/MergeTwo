
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031e9a0c(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_031e9b9c + 0x31e9a20);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e9ba0 + 0x31e9a34));
    func_0x01438628(*(undefined4 *)(_UNK_031e9ba4 + 0x31e9a40));
    func_0x01438628(*(undefined4 *)(_UNK_031e9ba8 + 0x31e9a4c));
    func_0x01438628(*(undefined4 *)(_UNK_031e9bac + 0x31e9a58));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1aed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1aed,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_30._4_4_ = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
    uStack_30._0_4_ = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30._0_4_ = uStack_48;
    uStack_30._4_4_ = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar6 = *(int **)(_UNK_031e9bb0 + 0x31e9ab0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_031e9bb4 + 0x31e9acc);
  iVar1 = func_0x03b2c734(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  puVar8 = *(undefined4 **)(_UNK_031e9bb8 + 0x31e9afc);
  iVar1 = func_0x02b76b98(iVar1,0,*puVar8,0);
  if ((iVar1 == 0) && (iVar1 = FUN_031e95f4(), iVar1 != 0)) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(*puVar7);
    if (*(int *)(**(int **)(_UNK_031e9bbc + 0x31e9b40) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_30 = func_0x02aed6d8(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    func_0x02b768cc(iVar1,0,*puVar8);
    uVar2 = 1;
  }
  return uVar2;
}

