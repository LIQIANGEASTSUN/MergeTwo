
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1e798(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01b1e9b4 + 0x1b1e7ac);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1e9b8 + 0x1b1e7c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1e9bc + 0x1b1e7cc));
    func_0x01438628(*(undefined4 *)(_UNK_01b1e9c0 + 0x1b1e7d8));
    func_0x01438628(*(undefined4 *)(_UNK_01b1e9c4 + 0x1b1e7e4));
    func_0x01438628(*(undefined4 *)(_UNK_01b1e9c8 + 0x1b1e7f0));
    func_0x01438628(*(undefined4 *)(_UNK_01b1e9cc + 0x1b1e7fc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x382c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01b1e9d0 + 0x1b1e854) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b1e9d4 + 0x1b1e870));
    piVar4 = *(int **)(_UNK_01b1e9d8 + 0x1b1e884);
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar4;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x3f4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02b0fc08(iVar1,uVar6,0);
    if (*(int *)(**(int **)(_UNK_01b1e9dc + 0x1b1e8cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar6,0,0);
    if (iVar1 != 0) {
      func_0x01c4f178(0);
    }
    if (*(int *)(**(int **)(_UNK_01b1e9e0 + 0x1b1e908) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x01b18728();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02f7d884(iVar1,0);
    iVar1 = **(int **)(**(int **)(_UNK_01b1e9e4 + 0x1b1e944) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b2f170(iVar1,0);
    if (iVar1 != 3) {
      return;
    }
    iVar1 = FUN_01b188f4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x01b1e9e8(iVar1);
    if (iVar1 == 0) {
      return;
    }
    param_1 = FUN_01b188f4();
    if (param_1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_01b1e478 + 0x1b1e394);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01b1e47c + 0x1b1e3a8));
      func_0x01438628(*(undefined4 *)(_UNK_01b1e480 + 0x1b1e3b4));
      func_0x01438628(*(undefined4 *)(_UNK_01b1e484 + 0x1b1e3c0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x382a,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01b1e488 + 0x1b1e41c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b1e48c + 0x1b1e438));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_18 = 0;
      func_0x02bd9fb8(iVar1,0x18,0,**(undefined4 **)(_UNK_01b1e490 + 0x1b1e460));
      return;
    }
    iVar1 = func_0x029540a4(0x382a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0x382c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
  return;
}

