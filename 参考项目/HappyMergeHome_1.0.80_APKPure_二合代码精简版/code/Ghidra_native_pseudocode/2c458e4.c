
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x02c55ba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c55ba4) */
/* WARNING: Removing unreachable block (ram,0x026b6b4c) */
/* WARNING: Removing unreachable block (ram,0x026b6b6c) */
/* WARNING: Removing unreachable block (ram,0x026b6b8c) */
/* WARNING: Removing unreachable block (ram,0x026b6b98) */
/* WARNING: Removing unreachable block (ram,0x026b6bb4) */
/* WARNING: Removing unreachable block (ram,0x026b6bb8) */
/* WARNING: Removing unreachable block (ram,0x026b6bd4) */
/* WARNING: Removing unreachable block (ram,0x026b6bd8) */
/* WARNING: Removing unreachable block (ram,0x026b6b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c558e4(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 uVar8;
  int unaff_r5;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 unaff_r6;
  undefined4 *puVar13;
  undefined4 unaff_r7;
  int iVar14;
  undefined4 uVar15;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined8 uVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  pcVar9 = (char *)(_UNK_02c55c50 + 0x2c558fc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c55c54 + 0x2c55910));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c58 + 0x2c5591c));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c5c + 0x2c55928));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c60 + 0x2c55934));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c64 + 0x2c55940));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c68 + 0x2c5594c));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c6c + 0x2c55958));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c70 + 0x2c55964));
    func_0x01438628(*(undefined4 *)(_UNK_02c55c74 + 0x2c55970));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5f31,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5f31,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    auStack_20[0] = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    auStack_20[0] = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar11 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    uVar11 = func_0x024f56d0(iVar7,uVar11,&uStack_30,uVar6,0,0);
    return uVar11;
  }
  piVar10 = *(int **)(_UNK_02c55c78 + 0x2c559cc);
  iVar3 = **(int **)(*piVar10 + 0x5c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  auStack_20[0] = 0;
  func_0x02b65c74(iVar3,0x191,0,0);
  iVar3 = **(int **)(*piVar10 + 0x5c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  auStack_20[0] = 0;
  func_0x02b65c74(iVar3,0x303,0,0);
  if (*(int *)(**(int **)(_UNK_02c55c7c + 0x2c55a38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x02c35d10(3);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_02c55c80 + 0x2c55a64) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c55c84 + 0x2c55a80));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_02c55c88 + 0x2c55aa0));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar7 = *(int *)(iVar3 + 0x1a8);
  if (*(int *)(**(int **)(_UNK_02c55c8c + 0x2c55ac4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c55c90 + 0x2c55ae4));
  piVar10 = *(int **)(_UNK_02c55c94 + 0x2c55af8);
  iVar5 = *piVar10;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar10;
  }
  if (iVar7 == 1) {
    iVar14 = **(int **)(_UNK_02c55c98 + 0x2c55b20);
    uVar11 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x5f4);
    iVar7 = *(int *)(iVar14 + 0x1c);
    if (iVar7 == 0) {
      func_0x014909d8(iVar14);
      iVar7 = *(int *)(iVar14 + 0x1c);
    }
    iVar7 = *(int *)(iVar7 + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = *(int *)(*(int *)(iVar14 + 0x1c) + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    uVar6 = **(undefined4 **)(iVar7 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x2c55ba4;
    unaff_r4 = iVar4;
    unaff_r5 = iVar3;
    unaff_r6 = uVar11;
    unaff_r7 = uVar6;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
  }
  else {
    iVar7 = **(int **)(_UNK_02c55c98 + 0x2c55b20);
    uVar11 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x160);
    iVar3 = *(int *)(iVar7 + 0x1c);
    if (iVar3 == 0) {
      func_0x014909d8(iVar7);
      iVar3 = *(int *)(iVar7 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    uVar6 = **(undefined4 **)(iVar3 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  piVar10 = (int *)((int)register0x00000054 + -0x18);
  *piVar10 = unaff_r4;
  iVar3 = func_0x02953fd4(0x1d9,0,uVar6,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x1d9,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    uVar11 = func_0x0286ef30(iVar3,iVar4,uVar11,uVar6);
    return uVar11;
  }
  iVar3 = *piVar10;
  uVar8 = *(undefined4 *)((int)register0x00000054 + -0x14);
  uVar12 = *(undefined4 *)((int)register0x00000054 + -0x10);
  iVar7 = *(int *)((int)register0x00000054 + -0xc);
  uVar15 = *(undefined4 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x14) = uVar15;
  *piVar10 = iVar7;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar12;
  *(undefined4 *)((int)register0x00000054 + -0x20) = uVar8;
  *(int *)((int)register0x00000054 + -0x24) = iVar3;
  pcVar9 = (char *)(iRam02b0d1bc + 0x2b0c9ac);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c0 + 0x2b0c9c0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c4 + 0x2b0c9cc));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c8 + 0x2b0c9d8));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1cc + 0x2b0c9e4));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d0 + 0x2b0c9f0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d4 + 0x2b0c9fc));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d8 + 0x2b0ca08));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1dc + 0x2b0ca14));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e0 + 0x2b0ca20));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e4 + 0x2b0ca2c));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e8 + 0x2b0ca38));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1ec + 0x2b0ca44));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1f0 + 0x2b0ca50));
    *pcVar9 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  iVar3 = func_0x02953fd4(0x185,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x185,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    uVar11 = func_0x0286ef30(iVar3,iVar4,uVar11,uVar6);
    return uVar11;
  }
  iVar3 = *(int *)(iVar4 + 0x2c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x04784bcc(iVar3,uVar11,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar3 == 0) {
    uVar11 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar11,
                             **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar7 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
    iVar3 = *(int *)(iVar7 + 0x1c);
    if (iVar3 == 0) {
      func_0x014909d8(iVar7);
      iVar3 = *(int *)(iVar7 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    uVar6 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar11,uVar6,0);
    return 0;
  }
  iVar3 = *(int *)(iVar4 + 0x2c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar1 = func_0x0478480c((undefined1 *)((int)register0x00000054 + -0x38),iVar3,uVar11,
                          **(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  uVar8 = *(undefined4 *)((int)register0x00000054 + -0x2c);
  iVar3 = *(int *)(iVar4 + 0x10);
  iVar7 = *(int *)((int)register0x00000054 + -0x38);
  uVar12 = *(undefined4 *)((int)register0x00000054 + -0x34);
  uVar15 = *(undefined4 *)((int)register0x00000054 + -0x30);
  if (iVar7 == 1) {
    uVar1 = (uint)*(byte *)(iVar4 + 0x20);
  }
  if (iVar7 == 1 && uVar1 == 0) {
    *(undefined1 *)(iVar4 + 0x20) = 1;
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x0475561c(iVar3,uVar11,(undefined1 *)((int)register0x00000054 + -0x28),
                          **(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar3 == 0) {
    *(undefined4 *)((int)register0x00000054 + -0x40) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar8;
    iVar3 = func_0x02b1cc10(0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    uVar6 = func_0x02b1da0c(iVar3,uVar11,iVar7,3);
    piVar10 = *(int **)(_UNK_02b0d210 + 0x2b0cbb4);
    *(undefined4 *)((int)register0x00000054 + -0x28) = uVar6;
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024ef144(uVar6,0,0);
    if (iVar3 == 0) {
      uVar11 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar11,0);
      iVar7 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
      iVar3 = *(int *)(iVar7 + 0x1c);
      if (iVar3 == 0) {
        func_0x014909d8(iVar7);
        iVar3 = *(int *)(iVar7 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x0149097c();
      }
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x0149097c();
      }
      uVar6 = **(undefined4 **)(iVar3 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar11,uVar6,0);
      goto LAB_02b0cfc4;
    }
    iVar3 = *(int *)(iVar4 + 0x10);
    uVar6 = *(undefined4 *)((int)register0x00000054 + -0x28);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar3,uVar11,uVar6,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar3 = *(int *)((int)register0x00000054 + -0x28);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02b20500(iVar3,uVar11,0);
    iVar3 = *(int *)((int)register0x00000054 + -0x28);
    uVar8 = *(undefined4 *)((int)register0x00000054 + -0x3c);
    uVar6 = *(undefined4 *)((int)register0x00000054 + -0x40);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x20) = iVar7;
LAB_02b0cde4:
      *(undefined4 *)(iVar3 + 0x24) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar15;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar8;
      func_0x02b0d454(iVar4,iVar3,iVar7,uVar12);
      goto LAB_02b0ce00;
    }
    func_0x014388e4();
    iVar3 = *(int *)((int)register0x00000054 + -0x28);
    iRam00000020 = iVar7;
    if (iVar3 != 0) goto LAB_02b0cde4;
    uVar16 = func_0x014388e4();
    uVar11 = (undefined4)uVar16;
    if ((int)((ulonglong)uVar16 >> 0x20) != 1) {
LAB_02b0d1b0:
      func_0x014e7cd4(uVar11);
      func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar13 = (undefined4 *)func_0x014e9498(uVar11);
    uVar11 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
    iVar3 = func_0x01438d6c(uVar11,*(undefined4 *)*puVar13);
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)func_0x014e9578(4);
      iVar3 = _UNK_02b0d248;
      *puVar2 = *puVar13;
      uVar11 = func_0x014e9588(puVar2,iVar3 + 0x2b0d1a4,0);
      func_0x014e9558();
      goto LAB_02b0d1b0;
    }
    piVar10 = (int *)*puVar13;
    func_0x014e9558();
    if (piVar10 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar11 = (**(code **)(*piVar10 + 0xe8))(piVar10,*(undefined4 *)(*piVar10 + 0xec));
    iVar3 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
    iVar7 = *(int *)(iVar3 + 0x1c);
    if (iVar7 == 0) {
      func_0x014909d8(iVar3);
      iVar7 = *(int *)(iVar3 + 0x1c);
    }
    iVar7 = *(int *)(iVar7 + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    uVar8 = **(undefined4 **)(iVar3 + 0x5c);
    iVar3 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x026795f8(uVar11,uVar8,0);
  }
  else {
LAB_02b0ce00:
    if (iVar7 != 2) {
      iVar3 = *(int *)(iVar4 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0475561c(iVar3,uVar11,(undefined1 *)((int)register0x00000054 + -0x28),
                              **(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar4 + 0x14);
        uVar11 = *(undefined4 *)((int)register0x00000054 + -0x28);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b67d0c(iVar3,uVar11,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
        if (iVar3 == 0) {
          if (iVar7 == 0) {
            iVar3 = *(int *)(iVar4 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (0 < *(int *)(iVar3 + 0xc)) {
              iVar3 = *(int *)(iVar4 + 0x14);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b680f4(iVar3,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
              if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar7 = func_0x024ef144(iVar3,0,0);
              if (iVar7 != 0) {
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                func_0x02b212e4(iVar3,1,0,0);
              }
            }
          }
          iVar3 = *(int *)(iVar4 + 0x14);
          uVar11 = *(undefined4 *)((int)register0x00000054 + -0x28);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b681a8(iVar3,uVar11,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
        }
        else {
          iVar3 = *(int *)(iVar4 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 0xc)) {
            puVar13 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
            while( true ) {
              iVar3 = *(int *)(iVar4 + 0x14);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              piVar10 = (int *)func_0x03b680f4(iVar3,*puVar13);
              uVar11 = *(undefined4 *)((int)register0x00000054 + -0x28);
              if (piVar10 == (int *)0x0) {
                func_0x014388e4();
              }
              iVar3 = (**(code **)(*piVar10 + 0xc0))
                                (piVar10,uVar11,*(undefined4 *)(*piVar10 + 0xc4));
              if (iVar3 != 0) break;
              iVar3 = *(int *)(iVar4 + 0x14);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b680f4(iVar3,*puVar13);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x02b212e4(iVar3,1,0,0);
            }
          }
        }
      }
    }
  }
  iVar3 = *(int *)((int)register0x00000054 + -0x28);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x014e94d8(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar3,1,0);
  func_0x02b0d808(iVar4,*(undefined4 *)((int)register0x00000054 + -0x28));
  iVar3 = *(int *)((int)register0x00000054 + -0x28);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x02b20ab0(iVar3,uVar6,0);
LAB_02b0cfc4:
  return *(undefined4 *)((int)register0x00000054 + -0x28);
}

