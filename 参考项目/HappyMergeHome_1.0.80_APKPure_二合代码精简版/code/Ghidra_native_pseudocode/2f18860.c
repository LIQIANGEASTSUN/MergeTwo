
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f28860(void)

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
  
  pcVar3 = (char *)(_UNK_02f28b14 + 0x2f28874);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f28b18 + 0x2f28888));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b1c + 0x2f28894));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b20 + 0x2f288a0));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b24 + 0x2f288ac));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b28 + 0x2f288b8));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b2c + 0x2f288c4));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b30 + 0x2f288d0));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b34 + 0x2f288dc));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b38 + 0x2f288e8));
    func_0x01438628(*(undefined4 *)(_UNK_02f28b3c + 0x2f288f4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6d40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6d40,0);
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
  if (*(int *)(**(int **)(_UNK_02f28b40 + 0x2f2894c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f28b44 + 0x2f28968));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_02f28b48 + 0x2f2898c);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x1cc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02f28b4c + 0x2f289bc));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f28b50 + 0x2f289d4));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_02f28b54 + 0x2f289ec));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_02f28b58 + 0x2f28a18);
    puVar7 = *(undefined4 **)(_UNK_02f28b5c + 0x2f28a20);
    piVar8 = *(int **)(_UNK_02f28b60 + 0x2f28a28);
    do {
      if (*(int *)(**(int **)(_UNK_02f28b64 + 0x2f28a30) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_02f28b68 + 0x2f28a4c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x1cc);
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
      iVar6 = FUN_02f286a0(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_02f287ac(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

