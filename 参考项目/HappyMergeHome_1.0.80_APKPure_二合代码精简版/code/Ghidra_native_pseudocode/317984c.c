
/* WARNING: Possible PIC construction at 0x03189968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0318996c) */
/* WARNING: Removing unreachable block (ram,0x03189978) */
/* WARNING: Removing unreachable block (ram,0x0318997c) */
/* WARNING: Removing unreachable block (ram,0x03189998) */
/* WARNING: Removing unreachable block (ram,0x031899ac) */
/* WARNING: Removing unreachable block (ram,0x031899b0) */
/* WARNING: Removing unreachable block (ram,0x031899bc) */
/* WARNING: Removing unreachable block (ram,0x031899c0) */
/* WARNING: Removing unreachable block (ram,0x031899cc) */
/* WARNING: Removing unreachable block (ram,0x031899d0) */
/* WARNING: Removing unreachable block (ram,0x03189988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0318984c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
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
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_031899e4 + 0x3189864);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031899e8 + 0x3189878));
    func_0x01438628(*(undefined4 *)(_UNK_031899ec + 0x3189884));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7bb0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7bb0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_029147f0 + 0x29146fc);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029147f4 + 0x2914710),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    uVar4 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_029147f8 + 0x29147e0));
    return uVar4;
  }
  piVar6 = *(int **)(_UNK_031899f0 + 0x31898e4);
  iVar1 = FUN_0317e7f4(param_1);
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
    iVar1 = FUN_0317e7f4(param_1);
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
    iVar3 = *piVar6;
    uStack_28 = param_1;
    uStack_24 = param_2;
    if (iVar1 == 0) {
      func_0x024f83d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x05187824(0,0,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x5c));
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x034a8c14();
    }
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 0;
}

