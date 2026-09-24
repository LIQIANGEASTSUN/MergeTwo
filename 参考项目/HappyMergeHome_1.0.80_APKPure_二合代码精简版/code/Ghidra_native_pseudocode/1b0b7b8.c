
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b1b7b8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint unaff_r11;
  int iVar12;
  undefined1 uVar13;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar7 = (char *)(iRam01b1bb30 + 0x1b1b7d8);
  uStack_28 = param_2;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01b1bb34 + 0x1b1b7ec));
    func_0x01438628(*(undefined4 *)(iRam01b1bb38 + 0x1b1b7f8));
    func_0x01438628(*(undefined4 *)(iRam01b1bb3c + 0x1b1b804));
    func_0x01438628(*(undefined4 *)(iRam01b1bb40 + 0x1b1b810));
    func_0x01438628(*(undefined4 *)(iRam01b1bb44 + 0x1b1b81c));
    func_0x01438628(*(undefined4 *)(iRam01b1bb48 + 0x1b1b828));
    func_0x01438628(*(undefined4 *)(iRam01b1bb4c + 0x1b1b834));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6fa,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_0287f988 + 0x287f894);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287f98c + 0x287f8a8),param_1,param_2,0);
      *pcVar7 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = iStack_48;
    uStack_2c = iStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287f990 + 0x287f978));
    return iVar1;
  }
  uVar2 = *(uint *)(param_1 + 100);
  if ((int)uVar2 < (int)param_2) {
    param_2 = uVar2;
    uStack_28 = uVar2;
  }
  if (((int)param_2 <= (int)uVar2) && (uVar2 = *(uint *)(param_1 + 0x68), (int)uVar2 < (int)param_2)
     ) {
    iVar1 = func_0x014388d4(**(undefined4 **)(iRam01b1bb50 + 0x1b1b8b8));
    func_0x024eed9c(iVar1,**(undefined4 **)(iRam01b1bb54 + 0x1b1b8cc));
    iVar9 = 0;
    puVar11 = *(undefined4 **)(iRam01b1bb58 + 0x1b1b8e4);
    uStack_2c = param_2;
    while( true ) {
      uVar2 = uStack_2c;
      iVar8 = *(int *)(param_1 + 0x60);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x0152a69c(iVar8,uVar2,*puVar11);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x18);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar9) break;
      iVar8 = *(int *)(param_1 + 0x60);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x0152a69c(iVar8,uVar2,*puVar11);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x18);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x024f0530(iVar8,iVar9,**(undefined4 **)(iRam01b1bb5c + 0x1b1b980));
      iVar8 = *(int *)(param_1 + 0x60);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x0152a69c(iVar8,uVar2,*puVar11);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x1c);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x024f0530(iVar8,iVar9,**(undefined4 **)(iRam01b1bb60 + 0x1b1b9e0));
      uVar3 = func_0x014388d4(**(undefined4 **)(iRam01b1bb64 + 0x1b1b9f8));
      uStack_30 = 0;
      func_0x02ca3c70(uVar3,uVar10,uVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar1 + 8);
      uVar2 = *(uint *)(iVar1 + 0xc);
      piVar5 = *(int **)(iRam01b1bb68 + 0x1b1ba48);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar12 = *piVar5;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (uVar2 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar2 + 1;
        puVar4 = (undefined4 *)(iVar8 + uVar2 * 4 + 0x10);
        *puVar4 = uVar3;
        func_0x014385cc(puVar4,uVar3);
      }
      else {
        func_0x0152874c(iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar9 = iVar9 + 1;
    }
    return iVar1;
  }
  uVar13 = param_2 == uVar2;
  uVar10 = func_0x01524ffc(&uStack_28,0);
  uVar6 = func_0x01438638(*(undefined4 *)(iRam01b1bb6c + 0x1b1bacc));
  uVar3 = func_0x01438638(*(undefined4 *)(iRam01b1bb70 + 0x1b1badc));
  iVar1 = func_0x024eee28(uVar6,uVar10,uVar3,0);
  func_0x01438638(*(undefined4 *)(iRam01b1bb74 + 0x1b1bb00));
  iVar9 = func_0x014388d4();
  func_0x014e95c8(iVar9,iVar1,0);
  uVar10 = func_0x01438638(*(undefined4 *)(iRam01b1bb78 + 0x1b1bb20));
  func_0x01438790(iVar9,uVar10);
  uVar10 = func_0x014385d0();
  if ((bool)uVar13) {
    unaff_r11 = (uint)*(byte *)(iVar1 + -0x56c8);
    iVar1 = iVar1 + -0x69d8;
    iVar9 = iRam01b1bb38 + -0x3050;
  }
  uStack_34 = 0x1b1bb30;
  iVar12 = 0;
  uStack_38 = unaff_r11;
  iVar8 = func_0x02953fd4(0x44c,0);
  if (iVar8 == 0) {
    iVar1 = FUN_01b18c14(uVar10);
    if (iVar1 != 0) {
      iVar1 = FUN_01b18c14(uVar10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar12 = *(int *)(iVar1 + 0x10);
    }
    return iVar12;
  }
  iVar8 = func_0x029540a4(0x44c,0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_60 = 0;
  uStack_50 = 0;
  iStack_48 = iVar1;
  iStack_44 = iVar9;
  uStack_38 = param_2;
  func_0x024f56c0(&uStack_78,0,0);
  uStack_60 = uStack_78;
  uStack_5c = uStack_74;
  uStack_58 = uStack_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  if (*(int *)(iVar8 + 0x10) != 0) {
    func_0x01523a6c(&uStack_60,*(int *)(iVar8 + 0x10),0);
  }
  func_0x01523a6c(&uStack_60,uVar10,0);
  iVar9 = *(int *)(iVar8 + 8);
  uVar10 = *(undefined4 *)(iVar8 + 0xc);
  iVar1 = *(int *)(iVar8 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x024f56d0(iVar9,uVar10,&uStack_60,uVar6,0,0);
  iVar1 = func_0x024f56f0(&uStack_60,0,0);
  return iVar1;
}

