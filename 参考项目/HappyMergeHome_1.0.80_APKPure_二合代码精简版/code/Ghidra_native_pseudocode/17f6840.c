
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01806840(void)

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
  
  pcVar2 = (char *)(_UNK_01806af4 + 0x1806854);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01806af8 + 0x1806868));
    func_0x01438628(*(undefined4 *)(_UNK_01806afc + 0x1806874));
    func_0x01438628(*(undefined4 *)(_UNK_01806b00 + 0x1806880));
    func_0x01438628(*(undefined4 *)(_UNK_01806b04 + 0x180688c));
    func_0x01438628(*(undefined4 *)(_UNK_01806b08 + 0x1806898));
    func_0x01438628(*(undefined4 *)(_UNK_01806b0c + 0x18068a4));
    func_0x01438628(*(undefined4 *)(_UNK_01806b10 + 0x18068b0));
    func_0x01438628(*(undefined4 *)(_UNK_01806b14 + 0x18068bc));
    func_0x01438628(*(undefined4 *)(_UNK_01806b18 + 0x18068c8));
    func_0x01438628(*(undefined4 *)(_UNK_01806b1c + 0x18068d4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x90d0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x90d0,0);
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
  if (*(int *)(**(int **)(_UNK_01806b20 + 0x180692c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01806b24 + 0x1806948));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01806b28 + 0x180696c);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x238);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01806b2c + 0x180699c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01806b30 + 0x18069b4));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_01806b34 + 0x18069cc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_01806b38 + 0x18069f8);
    puVar7 = *(undefined4 **)(_UNK_01806b3c + 0x1806a00);
    piVar8 = *(int **)(_UNK_01806b40 + 0x1806a08);
    do {
      if (*(int *)(**(int **)(_UNK_01806b44 + 0x1806a10) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01806b48 + 0x1806a2c));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x238);
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
      iVar6 = FUN_01806680(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_0180678c(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

