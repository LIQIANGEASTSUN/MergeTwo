
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032da020(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_032da2d4 + 0x32da034);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032da2d8 + 0x32da048));
    func_0x01438628(*(undefined4 *)(_UNK_032da2dc + 0x32da054));
    func_0x01438628(*(undefined4 *)(_UNK_032da2e0 + 0x32da060));
    func_0x01438628(*(undefined4 *)(_UNK_032da2e4 + 0x32da06c));
    func_0x01438628(*(undefined4 *)(_UNK_032da2e8 + 0x32da078));
    func_0x01438628(*(undefined4 *)(_UNK_032da2ec + 0x32da084));
    func_0x01438628(*(undefined4 *)(_UNK_032da2f0 + 0x32da090));
    func_0x01438628(*(undefined4 *)(_UNK_032da2f4 + 0x32da09c));
    func_0x01438628(*(undefined4 *)(_UNK_032da2f8 + 0x32da0a8));
    func_0x01438628(*(undefined4 *)(_UNK_032da2fc + 0x32da0b4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x83c0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x83c0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_032da300 + 0x32da10c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032da304 + 0x32da128));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_032da308 + 0x32da14c);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x32c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_032da30c + 0x32da17c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032da310 + 0x32da194));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_032da314 + 0x32da1ac));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_032da318 + 0x32da1d8);
    puVar7 = *(undefined4 **)(_UNK_032da31c + 0x32da1e0);
    piVar8 = *(int **)(_UNK_032da320 + 0x32da1e8);
    do {
      if (*(int *)(**(int **)(_UNK_032da324 + 0x32da1f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032da328 + 0x32da20c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x32c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x04cfd760(iVar1,uVar5,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b73d40(iVar6,uVar2,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_032d9e60(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_032d9f6c(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

