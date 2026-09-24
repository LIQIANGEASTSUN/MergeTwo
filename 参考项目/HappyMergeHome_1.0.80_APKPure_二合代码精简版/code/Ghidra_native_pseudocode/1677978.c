
/* WARNING: Possible PIC construction at 0x01687a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01687a98) */
/* WARNING: Removing unreachable block (ram,0x01687aa4) */
/* WARNING: Removing unreachable block (ram,0x01687aa8) */
/* WARNING: Removing unreachable block (ram,0x01687ac4) */
/* WARNING: Removing unreachable block (ram,0x01687ad8) */
/* WARNING: Removing unreachable block (ram,0x01687adc) */
/* WARNING: Removing unreachable block (ram,0x01687ae8) */
/* WARNING: Removing unreachable block (ram,0x01687aec) */
/* WARNING: Removing unreachable block (ram,0x01687af8) */
/* WARNING: Removing unreachable block (ram,0x01687afc) */
/* WARNING: Removing unreachable block (ram,0x01687ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01687978(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_01687b10 + 0x1687990);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01687b14 + 0x16879a4));
    func_0x01438628(*(undefined4 *)(_UNK_01687b18 + 0x16879b0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x87ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x87ad,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_029157f4 + 0x2915700);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029157f8 + 0x2915714),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_029157fc + 0x29157e4));
    return uVar5;
  }
  puVar6 = *(undefined4 **)(_UNK_01687b1c + 0x1687a10);
  iVar1 = FUN_0167c750(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x6c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar1 = FUN_0167c750(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x6c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = (*(code *)&SUB_03b780b0)(iVar1,0,*puVar6);
    return uVar5;
  }
  return 0;
}

