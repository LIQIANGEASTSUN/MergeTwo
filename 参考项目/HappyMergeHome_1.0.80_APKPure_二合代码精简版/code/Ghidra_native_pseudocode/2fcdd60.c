
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fddd60(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int unaff_r5;
  int *piVar9;
  undefined4 uVar10;
  undefined4 unaff_r6;
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
  
  pcVar6 = (char *)(_UNK_02fde3ac + 0x2fddd7c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fde3b0 + 0x2fddd90));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3b4 + 0x2fddd9c));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3b8 + 0x2fddda8));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3bc + 0x2fdddb4));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3c0 + 0x2fdddc0));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3c4 + 0x2fdddcc));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3c8 + 0x2fdddd8));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3cc + 0x2fddde4));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3d0 + 0x2fdddf0));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3d4 + 0x2fdddfc));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3d8 + 0x2fdde08));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3dc + 0x2fdde14));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3e0 + 0x2fdde20));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3e4 + 0x2fdde2c));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3e8 + 0x2fdde38));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3ec + 0x2fdde44));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3f0 + 0x2fdde50));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3f4 + 0x2fdde5c));
    func_0x01438628(*(undefined4 *)(_UNK_02fde3f8 + 0x2fdde68));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2bd8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2bd8,0);
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
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar10 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  iStack_2c = param_2;
  if (*(int *)(**(int **)(_UNK_02fde3fc + 0x2fdded0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iStack_28 = func_0x02af43a8(uVar10,uVar5,0);
  iVar2 = 0;
  while( true ) {
    iVar8 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar8 + 0xc) <= iVar2) break;
    iVar8 = func_0x04cfd760(iVar8,iVar2,**(undefined4 **)(_UNK_02fde400 + 0x2fddf38));
    iVar7 = **(int **)(**(int **)(_UNK_02fde404 + 0x2fddf54) + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar8 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = FUN_02e651cc(iVar7,uVar10,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_02fde408 + 0x2fddf98) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02fde40c + 0x2fddfc0));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x7d;
      uVar10 = *(undefined4 *)(iVar8 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar10;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar7,iVar3,1,0);
      iVar7 = FUN_02fdd6f8(param_1,*(undefined4 *)(iVar8 + 8));
      if (iVar7 == 0) goto LAB_02fde0e0;
      if (0 < *(int *)(iVar8 + 0xc)) {
        iVar7 = 0;
        do {
          iVar3 = FUN_02fcfc38(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar10 = *(undefined4 *)(iVar8 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar10,**(undefined4 **)(_UNK_02fde410 + 0x2fde074));
          iVar3 = **(int **)(_UNK_02fde414 + 0x2fde088);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_02fcd8a4();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x02fe71b0(iVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar8 + 0xc));
      }
    }
    else {
LAB_02fde0e0:
      uVar10 = *(undefined4 *)(iVar8 + 8);
      uVar5 = *(undefined4 *)(iVar8 + 0xc);
      iVar8 = **(int **)(**(int **)(_UNK_02fde418 + 0x2fde0ec) + 0x5c);
      if (iVar8 == 0) {
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
      FUN_02e64460(iVar8,uVar10,uVar5);
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(**(int **)(_UNK_02fde41c + 0x2fde164) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fde420 + 0x2fde180));
  piVar9 = *(int **)(_UNK_02fde424 + 0x2fde194);
  iVar7 = *piVar9;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar9;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
  piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fde428 + 0x2fde1b8),1);
  if (piVar9 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar7 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar9 + 0x20));
  if (iVar7 == 0) {
    uVar5 = func_0x01438904();
    func_0x01438790(uVar5,0);
  }
  if (piVar9[3] == 0) {
    func_0x014388e8();
  }
  piVar9[4] = iVar8;
  func_0x014385cc(piVar9 + 4,iVar8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar10,piVar9,0);
  if (*(int *)(**(int **)(_UNK_02fde42c + 0x2fde244) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02fde430 + 0x2fde260));
  if (*(int *)(**(int **)(_UNK_02fde434 + 0x2fde274) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_02fde438 + 0x2fde290));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar9 = *(int **)(_UNK_02fde43c + 0x2fde2b0);
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  iVar7 = *piVar9;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar9;
  }
  iVar3 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
  if (iVar3 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar9;
    }
    uVar5 = **(undefined4 **)(iVar7 + 0x5c);
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02fde440 + 0x2fde2fc));
    func_0x0152e3ec(iVar3,uVar5,**(undefined4 **)(_UNK_02fde444 + 0x2fde31c),0);
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar9 = iVar3;
    func_0x014385cc(piVar9,iVar3);
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
  func_0x02b75870(iVar2,iVar8,uVar10,0,0x103,0,0,0);
  uVar10 = *(undefined4 *)(iStack_2c + 8);
  pcVar6 = (char *)(_UNK_02fddc1c + 0x2fdda78);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fddc20 + 0x2fdda8c));
    func_0x01438628(*(undefined4 *)(_UNK_02fddc24 + 0x2fdda98));
    func_0x01438628(*(undefined4 *)(_UNK_02fddc28 + 0x2fddaa4));
    func_0x01438628(*(undefined4 *)(_UNK_02fddc2c + 0x2fddab0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2be9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2be9,0);
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
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = FUN_02fcfc38(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x78);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x046c26fc(iVar2,uVar10,**(undefined4 **)(_UNK_02fddc30 + 0x2fddb48));
  iVar8 = FUN_02fcfc38(param_1);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar8 + 0x78);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar8 + 0x18);
  if (iVar8 == 0) {
    func_0x014388e4();
    if (iVar2 == 0) goto LAB_02fddbfc;
    iVar2 = func_0x03b70fac(0,uVar10,**(undefined4 **)(_UNK_02fddc34 + 0x2fddbcc));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_02fddbfc:
      iVar2 = **(int **)(_UNK_02fddc40 + 0x2fddc10);
      if (iVar8 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar8,uVar10,1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24)
                     );
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x03b70fac(iVar8,uVar10,**(undefined4 **)(_UNK_02fddc38 + 0x2fddba0));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_02fddc3c + 0x2fddbf0);
  if (iVar8 == 0) {
    func_0x024f83d4();
  }
  iVar2 = func_0x046c26fc(iVar8,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x38));
  if (iVar2 != 0) {
    if (iVar8 == 0) {
      func_0x024f83d4();
    }
    func_0x046c23f8(iVar8,uVar10,*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x34))
    ;
    uVar5 = func_0x024f83c4(*(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x20),
                            &stack0xffffffe0);
    iVar2 = func_0x0515c410(&stack0xffffffe4,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x3c));
    if (iVar2 != 0) {
      return;
    }
  }
  if (iVar8 == 0) {
    func_0x024f83d4();
  }
  func_0x046c2488(iVar8,uVar10,unaff_r7,
                  *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x40));
  uVar5 = *(undefined4 *)(*(int *)(*(int *)(unaff_r5 + 0x10) + 0x60) + 0x28);
  unaff_lr = 0x3b710c8;
  unaff_r4 = iVar8;
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
  piVar9 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar11 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar2 = func_0x04e4a028(*puVar11);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  uVar4 = *(uint *)(iVar2 + 0x60);
  cVar1 = *(char *)(iVar8 + 0x30);
  *(uint *)(iVar2 + 0x60) = uVar4 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar4);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar11);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  if (*(char *)(iVar8 + 0x31) != '\0') {
    if (*(int *)(*piVar9 + 0x74) == 0) {
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

