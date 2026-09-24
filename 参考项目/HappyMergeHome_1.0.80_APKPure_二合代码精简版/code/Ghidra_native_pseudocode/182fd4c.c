
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183fd4c(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
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
  
  pcVar2 = (char *)(_UNK_01840000 + 0x183fd60);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01840004 + 0x183fd74));
    func_0x01438628(*(undefined4 *)(_UNK_01840008 + 0x183fd80));
    func_0x01438628(*(undefined4 *)(_UNK_0184000c + 0x183fd8c));
    func_0x01438628(*(undefined4 *)(_UNK_01840010 + 0x183fd98));
    func_0x01438628(*(undefined4 *)(_UNK_01840014 + 0x183fda4));
    func_0x01438628(*(undefined4 *)(_UNK_01840018 + 0x183fdb0));
    func_0x01438628(*(undefined4 *)(_UNK_0184001c + 0x183fdbc));
    func_0x01438628(*(undefined4 *)(_UNK_01840020 + 0x183fdc8));
    func_0x01438628(*(undefined4 *)(_UNK_01840024 + 0x183fdd4));
    func_0x01438628(*(undefined4 *)(_UNK_01840028 + 0x183fde0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x924e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x924e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0184002c + 0x183fe38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01840030 + 0x183fe54));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01840034 + 0x183fe78);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x310);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01840038 + 0x183fea8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0184003c + 0x183fec0));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01840040 + 0x183fed8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01840044 + 0x183ff04);
    puVar7 = *(undefined4 **)(_UNK_01840048 + 0x183ff0c);
    piVar8 = *(int **)(_UNK_0184004c + 0x183ff14);
    do {
      if (*(int *)(**(int **)(_UNK_01840050 + 0x183ff1c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01840054 + 0x183ff38));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x310);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x0152983c(iVar1,uVar4,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f04d4(iVar6,uVar3,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_0183fb8c(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_0183fc98(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

