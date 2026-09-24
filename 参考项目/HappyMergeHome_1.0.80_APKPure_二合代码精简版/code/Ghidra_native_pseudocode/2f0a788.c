
/* WARNING: Possible PIC construction at 0x02f1a8e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f1a8e8) */
/* WARNING: Removing unreachable block (ram,0x02f1a8ec) */
/* WARNING: Removing unreachable block (ram,0x02f1a8f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f1a788(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 unaff_r5;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02f1a93c + 0x2f1a79c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1a940 + 0x2f1a7b0));
    func_0x01438628(*(undefined4 *)(_UNK_02f1a944 + 0x2f1a7bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x430c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x430c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56f0(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = FUN_02f197f8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    iVar1 = FUN_02f197f8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      puVar6 = *(undefined4 **)(_UNK_02f1a948 + 0x2f1a864);
      iVar1 = FUN_02f197f8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        iVar1 = FUN_02f197f8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x1c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *puVar6;
      }
      else {
        iVar1 = FUN_02f196e8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        unaff_r5 = *(undefined4 *)(iVar1 + 0x30);
        iVar1 = FUN_02f197f8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *puVar6;
        unaff_lr = 0x2f1a8e8;
        unaff_r4 = param_1;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
      }
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r5;
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r4;
      if (*(int *)(iVar1 + 0xc) == 0) {
        func_0x05187824(0,0,uVar5);
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
  }
  return 100;
}

