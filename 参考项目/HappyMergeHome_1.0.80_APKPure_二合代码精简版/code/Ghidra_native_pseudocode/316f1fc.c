
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0317f1fc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0317f5dc + 0x317f214);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317f5e0 + 0x317f228));
    func_0x01438628(*(undefined4 *)(_UNK_0317f5e4 + 0x317f234));
    func_0x01438628(*(undefined4 *)(_UNK_0317f5e8 + 0x317f240));
    func_0x01438628(*(undefined4 *)(_UNK_0317f5ec + 0x317f24c));
    func_0x01438628(*(undefined4 *)(_UNK_0317f5f0 + 0x317f258));
    func_0x01438628(*(undefined4 *)(_UNK_0317f5f4 + 0x317f264));
    func_0x01438628(*(undefined4 *)(_UNK_0317f5f8 + 0x317f270));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1355,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1355,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0317f5fc + 0x317f2cc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0317f600 + 0x317f2e8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar7 = 0;
    puVar10 = *(undefined4 **)(_UNK_0317f604 + 0x317f324);
    puVar9 = *(undefined4 **)(_UNK_0317f608 + 0x317f32c);
    do {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0317f60c + 0x317f334));
      func_0x026eccc0(iVar2,0);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026ec8e4(iVar2,uVar8,0);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x24);
      if (iVar2 == 0) {
        func_0x014388e4();
        func_0x026ecb40(0,uVar8,0);
        func_0x014388e4();
      }
      else {
        func_0x026ecb40(iVar2,uVar8,0);
      }
      iVar6 = *(int *)(iVar2 + 0x1c);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x20);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x14);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x1c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x18);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x20);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x2c);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x30);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x18);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar3 = FUN_0317e7f4(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b77610(iVar3,iVar2,**(undefined4 **)(_UNK_0317f610 + 0x317f5bc));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0xc));
  }
  return;
}

