
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019e8080(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
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
  
  pcVar6 = (char *)(_UNK_019e8334 + 0x19e809c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019e8338 + 0x19e80b0));
    func_0x01438628(*(undefined4 *)(_UNK_019e833c + 0x19e80bc));
    func_0x01438628(*(undefined4 *)(_UNK_019e8340 + 0x19e80c8));
    func_0x01438628(*(undefined4 *)(_UNK_019e8344 + 0x19e80d4));
    func_0x01438628(*(undefined4 *)(_UNK_019e8348 + 0x19e80e0));
    func_0x01438628(*(undefined4 *)(_UNK_019e834c + 0x19e80ec));
    func_0x01438628(*(undefined4 *)(_UNK_019e8350 + 0x19e80f8));
    func_0x01438628(*(undefined4 *)(_UNK_019e8354 + 0x19e8104));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x36f7,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x36f7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_38,uVar5,0,0);
    uVar4 = func_0x024f56e0(&uStack_38,0,0);
    return uVar4;
  }
  if (*(int *)(**(int **)(_UNK_019e8358 + 0x19e8164) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_019e835c + 0x19e8180));
  iVar2 = iVar8;
  if (iVar8 == 0) {
    iVar2 = func_0x014388e4();
  }
  iVar8 = *(int *)(iVar8 + 0x18);
  if (iVar8 != 0) {
    iVar2 = *(int *)(iVar8 + 0xc);
  }
  if (iVar8 == 0 || iVar2 == 0) {
    return 0;
  }
  piVar7 = *(int **)(_UNK_019e8360 + 0x19e81c4);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar7;
  }
  iVar10 = *(int *)(*(int *)(iVar2 + 0x5c) + 8);
  if (iVar10 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar7;
    }
    uVar9 = **(undefined4 **)(iVar2 + 0x5c);
    iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_019e8364 + 0x19e820c));
    func_0x024f1190(iVar10,uVar9,**(undefined4 **)(_UNK_019e8368 + 0x19e822c),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
    *piVar7 = iVar10;
    func_0x014385cc(piVar7,iVar10);
  }
  func_0x024f11a0(iVar8,iVar10,**(undefined4 **)(_UNK_019e836c + 0x19e8258));
  if (*(int *)(iVar8 + 0xc) < 1) {
    return 0;
  }
  puVar11 = *(undefined4 **)(_UNK_019e8370 + 0x19e827c);
  iVar2 = 1;
  while( true ) {
    iVar10 = func_0x0152983c(iVar8,iVar2 + -1,*puVar11);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar10 + 8) == param_2) break;
    bVar1 = *(int *)(iVar8 + 0xc) <= iVar2;
    iVar2 = iVar2 + 1;
    if (bVar1) {
      return 0;
    }
  }
  iVar10 = FUN_019e801c(param_1,param_2);
  if (iVar10 == 0) {
    return 0;
  }
  if (iVar10 == 3) {
    return 0;
  }
  do {
    iVar10 = iVar2;
    iVar12 = *(int *)(iVar8 + 0xc);
    if (iVar12 <= iVar10) break;
    iVar2 = func_0x0152983c(iVar8,iVar10,*puVar11);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_019e801c(param_1,*(undefined4 *)(iVar2 + 8));
    iVar2 = iVar10 + 1;
  } while (iVar3 == 0);
  return (uint)(iVar12 <= iVar10);
}

