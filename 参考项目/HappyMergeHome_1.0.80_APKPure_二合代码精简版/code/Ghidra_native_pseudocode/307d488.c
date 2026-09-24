
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0308d488(int param_1,int param_2)

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
  
  pcVar6 = (char *)(_UNK_0308dad4 + 0x308d4a4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308dad8 + 0x308d4b8));
    func_0x01438628(*(undefined4 *)(_UNK_0308dadc + 0x308d4c4));
    func_0x01438628(*(undefined4 *)(_UNK_0308dae0 + 0x308d4d0));
    func_0x01438628(*(undefined4 *)(_UNK_0308dae4 + 0x308d4dc));
    func_0x01438628(*(undefined4 *)(_UNK_0308dae8 + 0x308d4e8));
    func_0x01438628(*(undefined4 *)(_UNK_0308daec + 0x308d4f4));
    func_0x01438628(*(undefined4 *)(_UNK_0308daf0 + 0x308d500));
    func_0x01438628(*(undefined4 *)(_UNK_0308daf4 + 0x308d50c));
    func_0x01438628(*(undefined4 *)(_UNK_0308daf8 + 0x308d518));
    func_0x01438628(*(undefined4 *)(_UNK_0308dafc + 0x308d524));
    func_0x01438628(*(undefined4 *)(_UNK_0308db00 + 0x308d530));
    func_0x01438628(*(undefined4 *)(_UNK_0308db04 + 0x308d53c));
    func_0x01438628(*(undefined4 *)(_UNK_0308db08 + 0x308d548));
    func_0x01438628(*(undefined4 *)(_UNK_0308db0c + 0x308d554));
    func_0x01438628(*(undefined4 *)(_UNK_0308db10 + 0x308d560));
    func_0x01438628(*(undefined4 *)(_UNK_0308db14 + 0x308d56c));
    func_0x01438628(*(undefined4 *)(_UNK_0308db18 + 0x308d578));
    func_0x01438628(*(undefined4 *)(_UNK_0308db1c + 0x308d584));
    func_0x01438628(*(undefined4 *)(_UNK_0308db20 + 0x308d590));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2b91,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2b91,0);
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
  if (*(int *)(**(int **)(_UNK_0308db24 + 0x308d5f8) + 0x74) == 0) {
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
    iVar8 = func_0x04cfd760(iVar8,iVar2,**(undefined4 **)(_UNK_0308db28 + 0x308d660));
    iVar7 = **(int **)(**(int **)(_UNK_0308db2c + 0x308d67c) + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar8 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = FUN_02e651cc(iVar7,uVar10,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_0308db30 + 0x308d6c0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0308db34 + 0x308d6e8));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x79;
      uVar10 = *(undefined4 *)(iVar8 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar10;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar7,iVar3,1,0);
      iVar7 = FUN_0308ce20(param_1,*(undefined4 *)(iVar8 + 8));
      if (iVar7 == 0) goto LAB_0308d808;
      if (0 < *(int *)(iVar8 + 0xc)) {
        iVar7 = 0;
        do {
          iVar3 = FUN_0307f35c(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar10 = *(undefined4 *)(iVar8 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar10,**(undefined4 **)(_UNK_0308db38 + 0x308d79c));
          iVar3 = **(int **)(_UNK_0308db3c + 0x308d7b0);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_0307cfc8();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x030968d8(iVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar8 + 0xc));
      }
    }
    else {
LAB_0308d808:
      uVar10 = *(undefined4 *)(iVar8 + 8);
      uVar5 = *(undefined4 *)(iVar8 + 0xc);
      iVar8 = **(int **)(**(int **)(_UNK_0308db40 + 0x308d814) + 0x5c);
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
  if (*(int *)(**(int **)(_UNK_0308db44 + 0x308d88c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0308db48 + 0x308d8a8));
  piVar9 = *(int **)(_UNK_0308db4c + 0x308d8bc);
  iVar7 = *piVar9;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar9;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
  piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0308db50 + 0x308d8e0),1);
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
  if (*(int *)(**(int **)(_UNK_0308db54 + 0x308d96c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_0308db58 + 0x308d988));
  if (*(int *)(**(int **)(_UNK_0308db5c + 0x308d99c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_0308db60 + 0x308d9b8));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar9 = *(int **)(_UNK_0308db64 + 0x308d9d8);
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
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0308db68 + 0x308da24));
    func_0x0152e3ec(iVar3,uVar5,**(undefined4 **)(_UNK_0308db6c + 0x308da44),0);
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
  func_0x02b75870(iVar2,iVar8,uVar10,0,0xee,0,0,0);
  uVar10 = *(undefined4 *)(iStack_2c + 8);
  pcVar6 = (char *)(_UNK_0308d344 + 0x308d1a0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308d348 + 0x308d1b4));
    func_0x01438628(*(undefined4 *)(_UNK_0308d34c + 0x308d1c0));
    func_0x01438628(*(undefined4 *)(_UNK_0308d350 + 0x308d1cc));
    func_0x01438628(*(undefined4 *)(_UNK_0308d354 + 0x308d1d8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2ba2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2ba2,0);
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
  iVar2 = FUN_0307f35c(param_1);
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
  iVar2 = func_0x046c26fc(iVar2,uVar10,**(undefined4 **)(_UNK_0308d358 + 0x308d270));
  iVar8 = FUN_0307f35c(param_1);
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
    if (iVar2 == 0) goto LAB_0308d324;
    iVar2 = func_0x03b70fac(0,uVar10,**(undefined4 **)(_UNK_0308d35c + 0x308d2f4));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_0308d324:
      iVar2 = **(int **)(_UNK_0308d368 + 0x308d338);
      if (iVar8 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar8,uVar10,1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24)
                     );
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x03b70fac(iVar8,uVar10,**(undefined4 **)(_UNK_0308d360 + 0x308d2c8));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_0308d364 + 0x308d318);
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

