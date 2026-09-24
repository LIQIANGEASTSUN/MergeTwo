
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3af70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01d3b270 + 0x1d3af88);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3b274 + 0x1d3af9c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b278 + 0x1d3afa8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3b27c + 0x1d3afb4));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xb38b,0);
  if (iVar2 == 0) {
    iVar2 = func_0x015fcde8(*(undefined4 *)(param_1 + 0x10),0);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_01d3a9c0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x01523ccc(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(param_1 + 0x10),0);
    uVar12 = FUN_01d3a9c0(param_1);
    uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar9 = (int)uVar12;
    if (iVar2 == 0) {
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x0268be6c(iVar9,0);
      iVar2 = FUN_01d3a9c0(param_1);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x0269f158(iVar2,uVar10,0);
      uVar12 = FUN_01d3a9c0(param_1);
      uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      uVar11 = *(undefined4 *)(param_1 + 0x1c);
      if ((int)uVar12 == 0) {
        func_0x014388e4();
        uVar10 = extraout_r1_01;
      }
      uStack_28 = 0;
      func_0x0269f22c((int)uVar12,uVar10,uVar5,uVar11);
      uVar12 = FUN_01d3a9c0(param_1);
      uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      uVar11 = *(undefined4 *)(param_1 + 0x24);
      if ((int)uVar12 == 0) {
        func_0x014388e4();
        uVar10 = extraout_r1_02;
      }
      uStack_28 = 0;
      func_0x0269f2fc((int)uVar12,uVar10,uVar5,uVar11);
      if (*(int *)(**(int **)(_UNK_01d3b280 + 0x1d3b184) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_01d3b284 + 0x1d3b1a0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x020e9710(iVar2,0);
      iVar9 = FUN_01d3a9c0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = *(undefined4 *)(iVar2 + 0x164);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x0269f600(iVar9,uVar10,0);
      iVar2 = **(int **)(**(int **)(_UNK_01d3b288 + 0x1d3b208) + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02b63a9c(iVar2,0xe11,0,0);
      if (iVar2 == 0) {
        iVar2 = FUN_01d3a9c0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x0269f544(iVar2,1,0);
      }
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        func_0x014388e4();
        uVar10 = extraout_r1;
      }
      uStack_28 = 0;
      func_0x0269f22c(iVar9,uVar10,uVar11,uVar5);
      uVar12 = FUN_01d3a9c0(param_1);
      uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x24);
      uVar11 = *(undefined4 *)(param_1 + 0x20);
      if ((int)uVar12 == 0) {
        func_0x014388e4();
        uVar10 = extraout_r1_00;
      }
      uStack_28 = 0;
      func_0x0269f2fc((int)uVar12,uVar10,uVar11,uVar5);
    }
    pcVar8 = (char *)(_UNK_01d3ae08 + 0x1d3aca4);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01d3ae0c + 0x1d3acb8));
      func_0x01438628(*(undefined4 *)(_UNK_01d3ae10 + 0x1d3acc4));
      func_0x01438628(*(undefined4 *)(_UNK_01d3ae14 + 0x1d3acd0));
      func_0x01438628(*(undefined4 *)(_UNK_01d3ae18 + 0x1d3acdc));
      func_0x01438628(*(undefined4 *)(_UNK_01d3ae1c + 0x1d3ace8));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x02953fd4(0xb388,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_01d3ae20 + 0x1d3ad40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01d3ae24 + 0x1d3ad5c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_01d3ae28 + 0x1d3ad7c));
      func_0x03a062d0(uVar10,param_1,**(undefined4 **)(_UNK_01d3ae2c + 0x1d3ad9c),0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x024f0f0c(iVar2,uVar10,**(undefined4 **)(_UNK_01d3ae30 + 0x1d3adc0));
      *(undefined4 *)(param_1 + 0x44) = uVar10;
      func_0x014385cc();
      iVar2 = FUN_01d3a9c0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0x34) != 0) {
        return;
      }
      pcVar8 = (char *)(_UNK_01d3af60 + 0x1d3ae48);
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01d3af64 + 0x1d3ae5c));
        func_0x01438628(*(undefined4 *)(_UNK_01d3af68 + 0x1d3ae68));
        *pcVar8 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x7cc,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x44);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f14b8(0,*(undefined4 *)(iVar2 + 0xc),0);
        iVar9 = *(int *)(param_1 + 0x44);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar9 + 0xc);
        iVar1 = FUN_01d3a9c0(param_1);
        iVar6 = *(int *)(param_1 + 0x44);
        iVar9 = 0;
        if (iVar2 < iVar7) {
          iVar9 = iVar2;
        }
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x0152983c(iVar6,iVar9,**(undefined4 **)(_UNK_01d3af6c + 0x1d3af24));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        pcVar8 = (char *)(_UNK_0269f764 + 0x269f6dc);
        if (*pcVar8 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_0269f768 + 0x269f6f0),iVar2,0);
          func_0x01438628(*(undefined4 *)(_UNK_0269f76c + 0x269f6fc));
          *pcVar8 = '\x01';
        }
        if (*(int *)(iVar1 + 0x34) != iVar2) {
          piVar3 = *(int **)(_UNK_0269f770 + 0x269f71c);
          *(int *)(iVar1 + 0x34) = iVar2;
          if (*(int *)(*piVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0269f774 + 0x269f73c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar4 = *(uint *)(iVar2 + 0x60);
          *(uint *)(iVar2 + 0x60) = uVar4 + 1;
          *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar4);
          return;
        }
        return;
      }
      iVar2 = func_0x029540a4(0x7cc,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar2 = func_0x029540a4(0xb388,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0xb38b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar9,uVar10,&uStack_30,uVar5,0,0);
  return;
}

