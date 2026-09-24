
/* WARNING: Possible PIC construction at 0x03638328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0363832c) */
/* WARNING: Removing unreachable block (ram,0x036383dc) */
/* WARNING: Removing unreachable block (ram,0x03637fd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_031e78b0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 uVar5;
  int unaff_r4;
  int *piVar6;
  int iVar7;
  int unaff_r5;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *unaff_r6;
  int iVar10;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x02953fd4(0x32fd,0);
  if (iVar2 == 0) {
    pcVar8 = (char *)(_UNK_031e67a0 + 0x31e66d4);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031e67a4 + 0x31e66e8));
      func_0x01438628(*(undefined4 *)(_UNK_031e67a8 + 0x31e66f4));
      func_0x01438628(*(undefined4 *)(_UNK_031e67ac + 0x31e6700));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x02953fd4(0x32f9,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_031e67b0 + 0x31e6758) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031e67b4 + 0x31e6774));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar7 = **(int **)(_UNK_031e67b8 + 0x31e6794);
      while( true ) {
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
        *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
        *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r6;
        *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
        *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
        puVar4 = *(undefined4 **)(iVar7 + 0x1c);
        if (puVar4 == (undefined4 *)0x0) {
          func_0x024f83cc(*(undefined4 *)(iRam03637f94 + 0x3637d58));
          func_0x024f83cc(*(undefined4 *)(iRam03637f98 + 0x3637d64));
          func_0x024f83cc(*(undefined4 *)(iRam03637f9c + 0x3637d70));
          func_0x024f83cc(*(undefined4 *)(iRam03637fa0 + 0x3637d7c));
          func_0x024f83cc(*(undefined4 *)(iRam03637fa4 + 0x3637d88));
          func_0x024f83cc(*(undefined4 *)(iRam03637fa8 + 0x3637d94));
          func_0x024f83cc(*(undefined4 *)(iRam03637fac + 0x3637da0));
          puVar4 = *(undefined4 **)(iVar7 + 0x1c);
          if (puVar4 == (undefined4 *)0x0) {
            func_0x024f83f8(iVar7);
            puVar4 = *(undefined4 **)(iVar7 + 0x1c);
          }
        }
        uVar9 = *puVar4;
        iVar10 = *(int *)(iVar2 + 0x28);
        if (*(int *)(**(int **)(iRam03637fb0 + 0x3637dc4) + 0x74) == 0) {
          func_0x024f83d8();
        }
        uVar9 = func_0x05171434(uVar9,0);
        if (iVar10 == 0) {
          func_0x024f83d4();
        }
        uVar9 = func_0x0475399c(iVar10,uVar9,**(undefined4 **)(iRam03637fb4 + 0x3637e08));
        iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03637fb8 + 0x3637e24),0);
        if (iVar10 != 0) break;
        iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03637fbc + 0x3637e50),0);
        if (iVar10 != 0) {
          iVar7 = *(int *)(iVar7 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x18);
          goto LAB_03637ef0;
        }
        iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03637fc0 + 0x3637e7c),0);
        if (iVar10 != 0) {
          iVar7 = *(int *)(iVar7 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03637ef0;
        }
        iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03637fc4 + 0x3637ea8),0);
        if (iVar10 != 0) {
          iVar7 = *(int *)(iVar7 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x20);
          goto LAB_03637ef0;
        }
        iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03637fc8 + 0x3637ed8),0);
        uVar13 = iVar10 == 0;
        uVar12 = 1;
        if (!(bool)uVar13) {
          iVar7 = *(int *)(iVar7 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x24);
          goto LAB_03637ef0;
        }
        func_0x024f83b8(*(undefined4 *)(iRam03637fcc + 0x3637f58));
        uVar5 = func_0x024f83c8();
        uVar3 = func_0x024f83b8(*(undefined4 *)(iRam03637fd0 + 0x3637f6c));
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
        func_0x0509473c(uVar5,uVar3,uVar9,0);
        func_0x024f83c0(uVar5,iVar7);
        uVar14 = func_0x024f83bc();
        iVar2 = (int)((ulonglong)uVar14 >> 0x20);
        iVar10 = (int)uVar14;
        if ((bool)uVar13) {
                    /* WARNING: Could not recover jumptable at 0x03637fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar1 = (int *)(*(code *)(extraout_r2 - (!(bool)uVar12 + 0xc)))();
          return piVar1;
        }
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x3637f94;
        *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_r11;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar5;
        *(int *)((int)register0x00000054 + -0x38) = iVar7;
        puVar11 = (undefined1 *)((int)register0x00000054 + -0x40);
        puVar4 = *(undefined4 **)(iVar2 + 0x1c);
        if (puVar4 == (undefined4 *)0x0) {
          func_0x024f83cc(*(undefined4 *)(iRam03638238 + 0x3637ffc));
          func_0x024f83cc(*(undefined4 *)(iRam0363823c + 0x3638008));
          func_0x024f83cc(*(undefined4 *)(iRam03638240 + 0x3638014));
          func_0x024f83cc(*(undefined4 *)(iRam03638244 + 0x3638020));
          func_0x024f83cc(*(undefined4 *)(iRam03638248 + 0x363802c));
          func_0x024f83cc(*(undefined4 *)(iRam0363824c + 0x3638038));
          func_0x024f83cc(*(undefined4 *)(iRam03638250 + 0x3638044));
          puVar4 = *(undefined4 **)(iVar2 + 0x1c);
          if (puVar4 == (undefined4 *)0x0) {
            func_0x024f83f8(iVar2);
            puVar4 = *(undefined4 **)(iVar2 + 0x1c);
          }
        }
        uVar9 = *puVar4;
        iVar7 = *(int *)(iVar10 + 0x28);
        if (*(int *)(**(int **)(iRam03638254 + 0x3638068) + 0x74) == 0) {
          func_0x024f83d8();
        }
        uVar9 = func_0x05171434(uVar9,0);
        if (iVar7 == 0) {
          func_0x024f83d4();
        }
        uVar9 = func_0x0475399c(iVar7,uVar9,**(undefined4 **)(iRam03638258 + 0x36380ac));
        iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam0363825c + 0x36380c8),0);
        if (iVar7 != 0) {
          iVar2 = *(int *)(iVar2 + 0x1c);
          piVar1 = *(int **)(iVar10 + 0x14);
LAB_03638194:
          iVar2 = *(int *)(iVar2 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar6 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar6 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar6 = (int *)0x0;
            }
          }
          return piVar6;
        }
        iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03638260 + 0x36380f4),0);
        if (iVar7 != 0) {
          iVar2 = *(int *)(iVar2 + 0x1c);
          piVar1 = *(int **)(iVar10 + 0x18);
          goto LAB_03638194;
        }
        iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03638264 + 0x3638120),0);
        if (iVar7 != 0) {
          iVar2 = *(int *)(iVar2 + 0x1c);
          piVar1 = *(int **)(iVar10 + 0x1c);
          goto LAB_03638194;
        }
        iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam03638268 + 0x363814c),0);
        if (iVar7 != 0) {
          iVar2 = *(int *)(iVar2 + 0x1c);
          piVar1 = *(int **)(iVar10 + 0x20);
          goto LAB_03638194;
        }
        iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam0363826c + 0x363817c),0);
        uVar13 = iVar7 == 0;
        uVar12 = 1;
        if (!(bool)uVar13) {
          iVar2 = *(int *)(iVar2 + 0x1c);
          piVar1 = *(int **)(iVar10 + 0x24);
          goto LAB_03638194;
        }
        func_0x024f83b8(*(undefined4 *)(iRam03638270 + 0x36381fc));
        uVar5 = func_0x024f83c8();
        uVar3 = func_0x024f83b8(*(undefined4 *)(iRam03638274 + 0x3638210));
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        func_0x0509473c(uVar5,uVar3,uVar9,0);
        func_0x024f83c0(uVar5,iVar2);
        iVar7 = 0x3638238;
        uVar14 = func_0x024f83bc();
        iVar10 = (int)((ulonglong)uVar14 >> 0x20);
        unaff_r5 = (int)uVar14;
        if ((bool)uVar13) {
          puVar11 = (undefined1 *)(extraout_r2_00 - (!(bool)uVar12 + 0x21000000));
          iVar2 = (((((((((iVar2 - (!(bool)uVar12 + 0xa0000)) - (!(bool)uVar12 + 0x98000)) -
                        (!(bool)uVar12 + 0x90000)) - (!(bool)uVar12 + 0x88000)) -
                      (!(bool)uVar12 + 0x80000)) - (!(bool)uVar12 + 0x3d0000)) -
                    (!(bool)uVar12 + 0x330000)) - (!(bool)uVar12 + 0x250000)) -
                  (!(bool)uVar12 + 0x1e0000)) - (!(bool)uVar12 + 0xf0000);
          iVar7 = extraout_r2_00 - (!(bool)uVar12 + 0x8c0);
        }
        *(int *)(puVar11 + -4) = iVar7;
        *(undefined4 *)(puVar11 + -8) = unaff_r8;
        *(undefined4 *)(puVar11 + -0xc) = 0;
        *(undefined4 *)(puVar11 + -0x10) = uVar9;
        *(undefined4 *)(puVar11 + -0x14) = uVar5;
        *(int *)(puVar11 + -0x18) = iVar2;
        register0x00000054 = (BADSPACEBASE *)(puVar11 + -0x38);
        piVar1 = *(int **)(extraout_r2_00 + 0x1c);
        if (piVar1 == (int *)0x0) {
          func_0x024f83cc(*(undefined4 *)(_UNK_03638450 + 0x36382a4));
          func_0x024f83cc(*(undefined4 *)(_UNK_03638454 + 0x36382b0));
          piVar1 = *(int **)(extraout_r2_00 + 0x1c);
          if (piVar1 == (int *)0x0) {
            piVar1 = (int *)func_0x024f83f8(extraout_r2_00);
          }
        }
        unaff_r6 = (undefined4 *)(puVar11 + -0x28);
        *unaff_r6 = 0;
        *(undefined4 *)(puVar11 + -0x24) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        *(undefined4 *)(puVar11 + -0x20) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        *(undefined4 *)(puVar11 + -0x1c) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        if (unaff_r5 == 0) {
          return piVar1;
        }
        if (iVar10 != 0) {
          func_0x046ccaa4(unaff_r5,*(undefined4 *)(*(int *)(extraout_r2_00 + 0x1c) + 0xc));
          func_0x04cfe6f4(puVar11 + -0x38,iVar10,
                          *(undefined4 *)(*(int *)(extraout_r2_00 + 0x1c) + 0x10));
          *unaff_r6 = *(undefined4 *)(puVar11 + -0x38);
          *(undefined4 *)(puVar11 + -0x24) = *(undefined4 *)(puVar11 + -0x34);
          *(undefined4 *)(puVar11 + -0x20) = *(undefined4 *)(puVar11 + -0x30);
          *(undefined4 *)(puVar11 + -0x1c) = *(undefined4 *)(puVar11 + -0x2c);
          while (iVar2 = func_0x04878f14(unaff_r6,*(undefined4 *)
                                                   (*(int *)(extraout_r2_00 + 0x1c) + 0x28)),
                iVar2 != 0) {
            piVar1 = *(int **)(puVar11 + -0x1c);
            if (piVar1 == (int *)0x0) {
              func_0x024f83d4();
            }
            uVar9 = (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
            func_0x046cc8c8(unaff_r5,uVar9,piVar1,
                            *(undefined4 *)(*(int *)(extraout_r2_00 + 0x1c) + 0x24));
          }
          piVar1 = (int *)func_0x04878f10(puVar11 + -0x28,
                                          *(undefined4 *)(*(int *)(extraout_r2_00 + 0x1c) + 0x2c));
          return piVar1;
        }
        if (*(int *)(**(int **)(_UNK_03638458 + 0x36382ec) + 0x74) == 0) {
          func_0x024f83d8();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0363845c + 0x3638308));
        if (iVar2 == 0) {
          func_0x024f83d4();
        }
        iVar7 = *(int *)(*(int *)(extraout_r2_00 + 0x1c) + 8);
        unaff_lr = 0x363832c;
        unaff_r4 = extraout_r2_00;
        unaff_r7 = iVar2;
      }
      iVar7 = *(int *)(iVar7 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x14);
LAB_03637ef0:
      iVar2 = *(int *)(iVar7 + 4);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x024f83fc(iVar2);
      }
      piVar6 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
           (piVar6 = piVar1,
           *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
          piVar6 = (int *)0x0;
        }
      }
      return piVar6;
    }
    iVar2 = func_0x029540a4(0x32f9,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar2 = func_0x029540a4(0x32fd,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
  }
  pcVar8 = (char *)(_UNK_028cd4f0 + 0x28cd410);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028cd4f4 + 0x28cd424),param_1,0);
    *pcVar8 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar5,0,0);
  piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028cd4f8 + 0x28cd4e0));
  return piVar1;
}

