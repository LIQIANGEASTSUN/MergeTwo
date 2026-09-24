
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fdf6c(void)

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
  
  pcVar2 = (char *)(_UNK_018fe220 + 0x18fdf80);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fe224 + 0x18fdf94));
    func_0x01438628(*(undefined4 *)(_UNK_018fe228 + 0x18fdfa0));
    func_0x01438628(*(undefined4 *)(_UNK_018fe22c + 0x18fdfac));
    func_0x01438628(*(undefined4 *)(_UNK_018fe230 + 0x18fdfb8));
    func_0x01438628(*(undefined4 *)(_UNK_018fe234 + 0x18fdfc4));
    func_0x01438628(*(undefined4 *)(_UNK_018fe238 + 0x18fdfd0));
    func_0x01438628(*(undefined4 *)(_UNK_018fe23c + 0x18fdfdc));
    func_0x01438628(*(undefined4 *)(_UNK_018fe240 + 0x18fdfe8));
    func_0x01438628(*(undefined4 *)(_UNK_018fe244 + 0x18fdff4));
    func_0x01438628(*(undefined4 *)(_UNK_018fe248 + 0x18fe000));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9687,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9687,0);
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
  if (*(int *)(**(int **)(_UNK_018fe24c + 0x18fe058) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fe250 + 0x18fe074));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_018fe254 + 0x18fe098);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2b4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018fe258 + 0x18fe0c8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fe25c + 0x18fe0e0));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_018fe260 + 0x18fe0f8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_018fe264 + 0x18fe124);
    puVar7 = *(undefined4 **)(_UNK_018fe268 + 0x18fe12c);
    piVar8 = *(int **)(_UNK_018fe26c + 0x18fe134);
    do {
      if (*(int *)(**(int **)(_UNK_018fe270 + 0x18fe13c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_018fe274 + 0x18fe158));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x2b4);
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
      iVar6 = FUN_018fddac(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_018fdeb8(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

