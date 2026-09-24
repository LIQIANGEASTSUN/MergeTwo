
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01926c6c(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_0192704c + 0x1926c84);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01927050 + 0x1926c98));
    func_0x01438628(*(undefined4 *)(_UNK_01927054 + 0x1926ca4));
    func_0x01438628(*(undefined4 *)(_UNK_01927058 + 0x1926cb0));
    func_0x01438628(*(undefined4 *)(_UNK_0192705c + 0x1926cbc));
    func_0x01438628(*(undefined4 *)(_UNK_01927060 + 0x1926cc8));
    func_0x01438628(*(undefined4 *)(_UNK_01927064 + 0x1926cd4));
    func_0x01438628(*(undefined4 *)(_UNK_01927068 + 0x1926ce0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfa7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfa7,0);
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
  if (*(int *)(**(int **)(_UNK_0192706c + 0x1926d3c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01927070 + 0x1926d58));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar7 = 0;
    puVar10 = *(undefined4 **)(_UNK_01927074 + 0x1926d94);
    puVar9 = *(undefined4 **)(_UNK_01927078 + 0x1926d9c);
    do {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0192707c + 0x1926da4));
      func_0x026f08a4(iVar2,0);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026f04c8(iVar2,uVar8,0);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x24);
      if (iVar2 == 0) {
        func_0x014388e4();
        func_0x026f0724(0,uVar8,0);
        func_0x014388e4();
      }
      else {
        func_0x026f0724(iVar2,uVar8,0);
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
      iVar3 = FUN_01926264(param_1);
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
      func_0x024f0f08(iVar3,iVar2,**(undefined4 **)(_UNK_01927080 + 0x192702c));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0xc));
  }
  return;
}

