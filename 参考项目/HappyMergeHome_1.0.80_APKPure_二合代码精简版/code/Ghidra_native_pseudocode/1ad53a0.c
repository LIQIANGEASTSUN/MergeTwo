
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae53a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_r8;
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
  
  pcVar6 = (char *)(_UNK_01ae5764 + 0x1ae53bc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae5768 + 0x1ae53d0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae576c + 0x1ae53dc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5770 + 0x1ae53e8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5774 + 0x1ae53f4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae5778 + 0x1ae5400));
    func_0x01438628(*(undefined4 *)(_UNK_01ae577c + 0x1ae540c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xce8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xce8,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x01ae9a14(param_1);
  if (param_2 != 0) {
    unaff_r8 = iVar1;
  }
  if (param_2 != 0 && iVar1 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if ((*(int *)(iVar5 + 0xc) < 1) && (0 < *(int *)(unaff_r8 + 0xc))) {
      iVar5 = 0;
      puVar10 = *(undefined4 **)(_UNK_01ae5780 + 0x1ae54d8);
      puVar9 = *(undefined4 **)(_UNK_01ae5784 + 0x1ae54e0);
      do {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01ae5788 + 0x1ae54e8));
        func_0x026eccc0(iVar2,0);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026ec8e4(iVar2,uVar7,0);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x24);
        if (iVar2 == 0) {
          func_0x014388e4();
          func_0x026ecb40(0,uVar7,0);
          func_0x014388e4();
        }
        else {
          func_0x026ecb40(iVar2,uVar7,0);
        }
        iVar8 = *(int *)(iVar2 + 0x1c);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x024f1074(iVar8,uVar7,*puVar9);
        iVar8 = *(int *)(iVar2 + 0x20);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x024f1074(iVar8,uVar7,*puVar9);
        iVar8 = *(int *)(iVar2 + 0x14);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x024f1074(iVar8,uVar7,*puVar9);
        iVar8 = *(int *)(iVar2 + 0x18);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x20);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x024f1074(iVar8,uVar7,*puVar9);
        iVar8 = *(int *)(iVar2 + 0x2c);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x14);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x024f1074(iVar8,uVar7,*puVar9);
        iVar8 = *(int *)(iVar2 + 0x30);
        iVar3 = func_0x0152983c(unaff_r8,iVar5,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x18);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x024f1074(iVar8,uVar7,*puVar9);
        iVar3 = *(int *)(iVar1 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x024f0f08(iVar3,iVar2,**(undefined4 **)(_UNK_01ae578c + 0x1ae5748));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(unaff_r8 + 0xc));
    }
  }
  return;
}

