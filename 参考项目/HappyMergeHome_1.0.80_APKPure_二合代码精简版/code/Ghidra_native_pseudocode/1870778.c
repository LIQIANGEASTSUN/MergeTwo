
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01880778(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int iVar7;
  int unaff_r5;
  int *piVar8;
  int iVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  int unaff_r7;
  undefined4 *puVar11;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01880dc4 + 0x1880794);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01880dc8 + 0x18807a8));
    func_0x01438628(*(undefined4 *)(_UNK_01880dcc + 0x18807b4));
    func_0x01438628(*(undefined4 *)(_UNK_01880dd0 + 0x18807c0));
    func_0x01438628(*(undefined4 *)(_UNK_01880dd4 + 0x18807cc));
    func_0x01438628(*(undefined4 *)(_UNK_01880dd8 + 0x18807d8));
    func_0x01438628(*(undefined4 *)(_UNK_01880ddc + 0x18807e4));
    func_0x01438628(*(undefined4 *)(_UNK_01880de0 + 0x18807f0));
    func_0x01438628(*(undefined4 *)(_UNK_01880de4 + 0x18807fc));
    func_0x01438628(*(undefined4 *)(_UNK_01880de8 + 0x1880808));
    func_0x01438628(*(undefined4 *)(_UNK_01880dec + 0x1880814));
    func_0x01438628(*(undefined4 *)(_UNK_01880df0 + 0x1880820));
    func_0x01438628(*(undefined4 *)(_UNK_01880df4 + 0x188082c));
    func_0x01438628(*(undefined4 *)(_UNK_01880df8 + 0x1880838));
    func_0x01438628(*(undefined4 *)(_UNK_01880dfc + 0x1880844));
    func_0x01438628(*(undefined4 *)(_UNK_01880e00 + 0x1880850));
    func_0x01438628(*(undefined4 *)(_UNK_01880e04 + 0x188085c));
    func_0x01438628(*(undefined4 *)(_UNK_01880e08 + 0x1880868));
    func_0x01438628(*(undefined4 *)(_UNK_01880e0c + 0x1880874));
    func_0x01438628(*(undefined4 *)(_UNK_01880e10 + 0x1880880));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x29d1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x29d1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  iStack_2c = param_2;
  if (*(int *)(**(int **)(_UNK_01880e14 + 0x18808e8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_28 = func_0x02af43a8(uVar10,uVar5,0);
  iVar2 = 0;
  while( true ) {
    iVar9 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar9 + 0xc) <= iVar2) break;
    iVar9 = func_0x0152983c(iVar9,iVar2,**(undefined4 **)(_UNK_01880e18 + 0x1880950));
    iVar7 = **(int **)(**(int **)(_UNK_01880e1c + 0x188096c) + 0x5c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar9 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02e651cc(iVar7,uVar10,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_01880e20 + 0x18809b0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01880e24 + 0x18809d8));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x6f;
      uVar10 = *(undefined4 *)(iVar9 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar10;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar7,iVar3,1,0);
      iVar7 = FUN_01880110(param_1,*(undefined4 *)(iVar9 + 8));
      if (iVar7 == 0) goto LAB_01880af8;
      if (0 < *(int *)(iVar9 + 0xc)) {
        iVar7 = 0;
        do {
          iVar3 = FUN_01873864(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar10 = *(undefined4 *)(iVar9 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar10,**(undefined4 **)(_UNK_01880e28 + 0x1880a8c));
          iVar3 = **(int **)(_UNK_01880e2c + 0x1880aa0);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_018725d4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x01889cbc(iVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar9 + 0xc));
      }
    }
    else {
LAB_01880af8:
      uVar10 = *(undefined4 *)(iVar9 + 8);
      uVar5 = *(undefined4 *)(iVar9 + 0xc);
      iVar9 = **(int **)(**(int **)(_UNK_01880e30 + 0x1880b04) + 0x5c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iStack_40 = 1;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      func_0x02e64460(iVar9,uVar10,uVar5);
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(**(int **)(_UNK_01880e34 + 0x1880b7c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01880e38 + 0x1880b98));
  piVar8 = *(int **)(_UNK_01880e3c + 0x1880bac);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01880e40 + 0x1880bd0),1);
  if (piVar8 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar7 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar8 + 0x20));
  if (iVar7 == 0) {
    uVar5 = func_0x01438904();
    func_0x01438790(uVar5,0);
  }
  if (piVar8[3] == 0) {
    func_0x014388e8();
  }
  piVar8[4] = iVar9;
  func_0x014385cc(piVar8 + 4,iVar9);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar10,piVar8,0);
  if (*(int *)(**(int **)(_UNK_01880e44 + 0x1880c5c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_01880e48 + 0x1880c78));
  if (*(int *)(**(int **)(_UNK_01880e4c + 0x1880c8c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01880e50 + 0x1880ca8));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar8 = *(int **)(_UNK_01880e54 + 0x1880cc8);
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
  if (iVar3 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    uVar5 = **(undefined4 **)(iVar7 + 0x5c);
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01880e58 + 0x1880d14));
    func_0x0152e3ec(iVar3,uVar5,**(undefined4 **)(_UNK_01880e5c + 0x1880d34),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar3;
    func_0x014385cc(piVar8,iVar3);
  }
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = iVar3;
  func_0x02b75870(iVar2,iVar9,uVar10,0,0xca,0,0,0);
  uVar10 = *(undefined4 *)(iStack_2c + 8);
  pcVar6 = (char *)(_UNK_01880634 + 0x1880490);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01880638 + 0x18804a4));
    func_0x01438628(*(undefined4 *)(_UNK_0188063c + 0x18804b0));
    func_0x01438628(*(undefined4 *)(_UNK_01880640 + 0x18804bc));
    func_0x01438628(*(undefined4 *)(_UNK_01880644 + 0x18804c8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x29e2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x29e2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,uVar10,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,uVar10,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = FUN_01873864(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x74);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0540(iVar2,uVar10,**(undefined4 **)(_UNK_01880648 + 0x1880560));
  iVar9 = FUN_01873864(param_1);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x74);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x18);
  if (iVar9 == 0) {
    func_0x014388e4();
    if (iVar2 == 0) goto LAB_01880614;
    iVar2 = func_0x024f05d4(0,uVar10,**(undefined4 **)(_UNK_0188064c + 0x18805e4));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_01880614:
      iVar2 = **(int **)(_UNK_01880658 + 0x1880628);
      if (iVar9 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar9,uVar10,1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24)
                     );
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x024f05d4(iVar9,uVar10,**(undefined4 **)(_UNK_01880650 + 0x18805b8));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_01880654 + 0x1880608);
  if (iVar9 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar9,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar9 == 0) {
      func_0x024f83d4();
    }
    func_0x046c23f8(iVar9,uVar10,*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x34))
    ;
    uVar5 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x20),
                            &stack0xffffffe0);
    iVar2 = func_0x0515c410(&stack0xffffffe4,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x3c));
    if (iVar2 != 0) {
      return;
    }
  }
  if (iVar9 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar9,uVar10,unaff_r7,
                  *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x40));
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x28);
  unaff_lr = 0x3b710c8;
  unaff_r4 = iVar9;
  unaff_r6 = uVar10;
  register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
SUB_03b70bb0:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  pcVar6 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
  if (*pcVar6 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),uVar5);
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar11 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar2 = func_0x04e4a028(*puVar11);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  uVar4 = *(uint *)(iVar2 + 0x60);
  cVar1 = *(char *)(iVar9 + 0x30);
  *(uint *)(iVar2 + 0x60) = uVar4 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar4);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar11);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  if (*(char *)(iVar9 + 0x31) != '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar11);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

