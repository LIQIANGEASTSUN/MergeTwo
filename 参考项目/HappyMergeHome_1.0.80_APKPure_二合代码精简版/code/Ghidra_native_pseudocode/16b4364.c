
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c4364(int param_1,int param_2)

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
  
  pcVar6 = (char *)(_UNK_016c49b0 + 0x16c4380);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c49b4 + 0x16c4394));
    func_0x01438628(*(undefined4 *)(_UNK_016c49b8 + 0x16c43a0));
    func_0x01438628(*(undefined4 *)(_UNK_016c49bc + 0x16c43ac));
    func_0x01438628(*(undefined4 *)(_UNK_016c49c0 + 0x16c43b8));
    func_0x01438628(*(undefined4 *)(_UNK_016c49c4 + 0x16c43c4));
    func_0x01438628(*(undefined4 *)(_UNK_016c49c8 + 0x16c43d0));
    func_0x01438628(*(undefined4 *)(_UNK_016c49cc + 0x16c43dc));
    func_0x01438628(*(undefined4 *)(_UNK_016c49d0 + 0x16c43e8));
    func_0x01438628(*(undefined4 *)(_UNK_016c49d4 + 0x16c43f4));
    func_0x01438628(*(undefined4 *)(_UNK_016c49d8 + 0x16c4400));
    func_0x01438628(*(undefined4 *)(_UNK_016c49dc + 0x16c440c));
    func_0x01438628(*(undefined4 *)(_UNK_016c49e0 + 0x16c4418));
    func_0x01438628(*(undefined4 *)(_UNK_016c49e4 + 0x16c4424));
    func_0x01438628(*(undefined4 *)(_UNK_016c49e8 + 0x16c4430));
    func_0x01438628(*(undefined4 *)(_UNK_016c49ec + 0x16c443c));
    func_0x01438628(*(undefined4 *)(_UNK_016c49f0 + 0x16c4448));
    func_0x01438628(*(undefined4 *)(_UNK_016c49f4 + 0x16c4454));
    func_0x01438628(*(undefined4 *)(_UNK_016c49f8 + 0x16c4460));
    func_0x01438628(*(undefined4 *)(_UNK_016c49fc + 0x16c446c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2add,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2add,0);
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
  if (*(int *)(**(int **)(_UNK_016c4a00 + 0x16c44d4) + 0x74) == 0) {
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
    iVar9 = func_0x0152983c(iVar9,iVar2,**(undefined4 **)(_UNK_016c4a04 + 0x16c453c));
    iVar7 = **(int **)(**(int **)(_UNK_016c4a08 + 0x16c4558) + 0x5c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar9 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02e651cc(iVar7,uVar10,0);
    if (iVar7 == 0) {
      if (*(int *)(**(int **)(_UNK_016c4a0c + 0x16c459c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x0202346c(0);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_016c4a10 + 0x16c45c4));
      func_0x02025440(iVar3,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 8) = 0x74;
      uVar10 = *(undefined4 *)(iVar9 + 8);
      *(undefined1 *)(iVar3 + 0x25) = 1;
      *(undefined4 *)(iVar3 + 0xc) = uVar10;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02024d08(iVar7,iVar3,1,0);
      iVar7 = FUN_016c3cfc(param_1,*(undefined4 *)(iVar9 + 8));
      if (iVar7 == 0) goto LAB_016c46e4;
      if (0 < *(int *)(iVar9 + 0xc)) {
        iVar7 = 0;
        do {
          iVar3 = func_0x016b6be8(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar10 = *(undefined4 *)(iVar9 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar10,**(undefined4 **)(_UNK_016c4a14 + 0x16c4678));
          iVar3 = **(int **)(_UNK_016c4a18 + 0x16c468c);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x016b4854();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x016cd7b4(iVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar9 + 0xc));
      }
    }
    else {
LAB_016c46e4:
      uVar10 = *(undefined4 *)(iVar9 + 8);
      uVar5 = *(undefined4 *)(iVar9 + 0xc);
      iVar9 = **(int **)(**(int **)(_UNK_016c4a1c + 0x16c46f0) + 0x5c);
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
  if (*(int *)(**(int **)(_UNK_016c4a20 + 0x16c4768) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016c4a24 + 0x16c4784));
  piVar8 = *(int **)(_UNK_016c4a28 + 0x16c4798);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x1ac);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016c4a2c + 0x16c47bc),1);
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
  if (*(int *)(**(int **)(_UNK_016c4a30 + 0x16c4848) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_016c4a34 + 0x16c4864));
  if (*(int *)(**(int **)(_UNK_016c4a38 + 0x16c4878) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_016c4a3c + 0x16c4894));
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  piVar8 = *(int **)(_UNK_016c4a40 + 0x16c48b4);
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
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_016c4a44 + 0x16c4900));
    func_0x0152e3ec(iVar3,uVar5,**(undefined4 **)(_UNK_016c4a48 + 0x16c4920),0);
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
  func_0x02b75870(iVar2,iVar9,uVar10,0,0xd7,0,0,0);
  uVar10 = *(undefined4 *)(iStack_2c + 8);
  pcVar6 = (char *)(_UNK_016c4220 + 0x16c407c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c4224 + 0x16c4090));
    func_0x01438628(*(undefined4 *)(_UNK_016c4228 + 0x16c409c));
    func_0x01438628(*(undefined4 *)(_UNK_016c422c + 0x16c40a8));
    func_0x01438628(*(undefined4 *)(_UNK_016c4230 + 0x16c40b4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2aee,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2aee,0);
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
  iVar2 = func_0x016b6be8(param_1);
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
  iVar2 = func_0x024f0540(iVar2,uVar10,**(undefined4 **)(_UNK_016c4234 + 0x16c414c));
  iVar9 = func_0x016b6be8(param_1);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x78);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar9 + 0x18);
  if (iVar9 == 0) {
    func_0x014388e4();
    if (iVar2 == 0) goto LAB_016c4200;
    iVar2 = func_0x024f05d4(0,uVar10,**(undefined4 **)(_UNK_016c4238 + 0x16c41d0));
    func_0x014388e4();
  }
  else {
    if (iVar2 == 0) {
LAB_016c4200:
      iVar2 = **(int **)(_UNK_016c4244 + 0x16c4214);
      if (iVar9 == 0) {
        func_0x024f83d4();
      }
      func_0x046c24b0(iVar9,uVar10,1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24)
                     );
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x28);
      goto SUB_03b70bb0;
    }
    iVar2 = func_0x024f05d4(iVar9,uVar10,**(undefined4 **)(_UNK_016c423c + 0x16c41a4));
  }
  unaff_r7 = iVar2 + 1;
  unaff_r5 = **(int **)(_UNK_016c4240 + 0x16c41f4);
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

