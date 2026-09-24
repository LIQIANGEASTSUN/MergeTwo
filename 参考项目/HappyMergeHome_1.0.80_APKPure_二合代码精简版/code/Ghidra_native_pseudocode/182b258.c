
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183b258(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_0183b638 + 0x183b270);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183b63c + 0x183b284));
    func_0x01438628(*(undefined4 *)(_UNK_0183b640 + 0x183b290));
    func_0x01438628(*(undefined4 *)(_UNK_0183b644 + 0x183b29c));
    func_0x01438628(*(undefined4 *)(_UNK_0183b648 + 0x183b2a8));
    func_0x01438628(*(undefined4 *)(_UNK_0183b64c + 0x183b2b4));
    func_0x01438628(*(undefined4 *)(_UNK_0183b650 + 0x183b2c0));
    func_0x01438628(*(undefined4 *)(_UNK_0183b654 + 0x183b2cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x17da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x17da,0);
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
  if (*(int *)(**(int **)(_UNK_0183b658 + 0x183b328) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183b65c + 0x183b344));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar7 = 0;
    puVar10 = *(undefined4 **)(_UNK_0183b660 + 0x183b380);
    puVar9 = *(undefined4 **)(_UNK_0183b664 + 0x183b388);
    do {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0183b668 + 0x183b390));
      func_0x026eccc0(iVar2,0);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026ec8e4(iVar2,uVar8,0);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
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
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024f1074(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x20);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024f1074(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x14);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x1c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024f1074(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x18);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x20);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024f1074(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x2c);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024f1074(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x30);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x18);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x024f1074(iVar6,uVar8,*puVar9);
      iVar3 = FUN_0183a850(param_1);
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
      func_0x024f0f08(iVar3,iVar2,**(undefined4 **)(_UNK_0183b66c + 0x183b618));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0xc));
  }
  return;
}

