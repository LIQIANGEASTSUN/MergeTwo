
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02baeb18(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
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
  
  pcVar5 = (char *)(_UNK_02baece4 + 0x2baeb34);
  uStack_28 = param_2;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baece8 + 0x2baeb48));
    func_0x01438628(*(undefined4 *)(_UNK_02baecec + 0x2baeb54));
    func_0x01438628(*(undefined4 *)(_UNK_02baecf0 + 0x2baeb60));
    func_0x01438628(*(undefined4 *)(_UNK_02baecf4 + 0x2baeb6c));
    *pcVar5 = '\x01';
  }
  iVar7 = 0;
  iVar2 = func_0x02953fd4(0x5ccd,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5ccd,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = uStack_28;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,uVar6,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar6,&uStack_38,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  uVar1 = 0;
  piVar8 = *(int **)(_UNK_02baecf8 + 0x2baebd4);
  puVar9 = *(undefined4 **)(_UNK_02baecfc + 0x2baebdc);
  puVar10 = *(undefined4 **)(_UNK_02baed00 + 0x2baebe4);
  while( true ) {
    iVar2 = FUN_02baddd0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0xc) <= iVar7) break;
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(*puVar9);
    iVar3 = FUN_02baddd0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x03b780b0(iVar3,iVar7,*puVar10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar3 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x029a6fa8(iVar2,uVar6,0);
    iVar2 = func_0x02baed04(param_1,uVar6);
    if (iVar2 == 4) {
      iVar2 = func_0x02baed80(param_1,iVar7,uStack_28);
      uVar1 = uVar1 | 0 < iVar2;
    }
    iVar7 = iVar7 + 1;
  }
  return uVar1;
}

