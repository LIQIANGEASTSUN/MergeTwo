
/* WARNING: Possible PIC construction at 0x031c32d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x031c32d4) */
/* WARNING: Removing unreachable block (ram,0x031c32e0) */
/* WARNING: Removing unreachable block (ram,0x031c32e4) */
/* WARNING: Removing unreachable block (ram,0x031c3300) */
/* WARNING: Removing unreachable block (ram,0x031c3314) */
/* WARNING: Removing unreachable block (ram,0x031c3318) */
/* WARNING: Removing unreachable block (ram,0x031c3324) */
/* WARNING: Removing unreachable block (ram,0x031c3328) */
/* WARNING: Removing unreachable block (ram,0x031c3334) */
/* WARNING: Removing unreachable block (ram,0x031c3338) */
/* WARNING: Removing unreachable block (ram,0x031c32f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031c31b4(undefined4 param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_031c334c + 0x31c31cc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c3350 + 0x31c31e0));
    func_0x01438628(*(undefined4 *)(_UNK_031c3354 + 0x31c31ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7d2d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7d2d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_029157f4 + 0x2915700);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029157f8 + 0x2915714),param_1,param_2,0);
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
    uVar4 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_029157fc + 0x29157e4));
    return uVar4;
  }
  piVar6 = *(int **)(_UNK_031c3358 + 0x31c324c);
  iVar1 = FUN_031b7b88(param_1);
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
    iVar1 = FUN_031b7b88(param_1);
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

