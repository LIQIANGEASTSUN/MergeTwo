
/* WARNING: Removing unreachable block (ram,0x036896f8) */
/* WARNING: Removing unreachable block (ram,0x0368950c) */
/* WARNING: Removing unreachable block (ram,0x036897f8) */
/* WARNING: Removing unreachable block (ram,0x036898bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01b19378(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int extraout_r1;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined4 unaff_r8;
  int iVar22;
  undefined4 unaff_r9;
  int *unaff_r10;
  int unaff_r11;
  undefined4 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined8 uVar35;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [4];
  
  pcVar16 = (char *)(_UNK_01b19458 + 0x1b1938c);
  if (*pcVar16 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1945c + 0x1b193a0));
    func_0x01438628(*(undefined4 *)(_UNK_01b19460 + 0x1b193ac));
    func_0x01438628(*(undefined4 *)(_UNK_01b19464 + 0x1b193b8));
    *pcVar16 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x10fb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x10fb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar16 = (char *)(_UNK_0289acb0 + 0x289abd0);
    if (*pcVar16 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0289acb4 + 0x289abe4),param_1,0);
      *pcVar16 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    auStack_20[0] = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    auStack_20[0] = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar17 = *(int *)(iVar1 + 8);
    uVar19 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar17 == 0) {
      func_0x014388e4();
    }
    uVar11 = 2;
    if (iVar1 == 0) {
      uVar11 = 1;
    }
    func_0x024f56d0(iVar17,uVar19,&uStack_30,uVar11,0,0);
    piVar2 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0289acb8 + 0x289aca0));
    return piVar2;
  }
  if (*(int *)(**(int **)(_UNK_01b19468 + 0x1b19410) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b1946c + 0x1b1942c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar17 = **(int **)(_UNK_01b19470 + 0x1b1944c);
  puVar23 = auStack_20;
  puVar8 = *(undefined4 **)(iVar17 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0368883c + 0x36885c8));
    func_0x024f83cc(*(undefined4 *)(iRam03688840 + 0x36885d4));
    func_0x024f83cc(*(undefined4 *)(iRam03688844 + 0x36885e0));
    func_0x024f83cc(*(undefined4 *)(iRam03688848 + 0x36885ec));
    func_0x024f83cc(*(undefined4 *)(iRam0368884c + 0x36885f8));
    func_0x024f83cc(*(undefined4 *)(iRam03688850 + 0x3688604));
    func_0x024f83cc(*(undefined4 *)(iRam03688854 + 0x3688610));
    func_0x024f83cc(*(undefined4 *)(iRam03688858 + 0x368861c));
    puVar8 = *(undefined4 **)(iVar17 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar17);
      puVar8 = *(undefined4 **)(iVar17 + 0x1c);
    }
  }
  uVar19 = *puVar8;
  iVar20 = *(int *)(iVar1 + 0x2c);
  if (*(int *)(**(int **)(iRam0368885c + 0x3688640) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar19 = func_0x05171434(uVar19,0);
  if (iVar20 == 0) {
    func_0x024f83d4();
  }
  uVar19 = func_0x0475399c(iVar20,uVar19,**(undefined4 **)(iRam03688860 + 0x3688684));
  iVar20 = func_0x04f57738(uVar19,**(undefined4 **)(iRam03688864 + 0x36886a0),0);
  if (iVar20 == 0) {
    iVar20 = func_0x04f57738(uVar19,**(undefined4 **)(iRam03688868 + 0x36886cc),0);
    if (iVar20 == 0) {
      iVar20 = func_0x04f57738(uVar19,**(undefined4 **)(iRam0368886c + 0x36886f8),0);
      if (iVar20 == 0) {
        iVar20 = func_0x04f57738(uVar19,**(undefined4 **)(iRam03688870 + 0x3688724),0);
        if (iVar20 == 0) {
          iVar20 = func_0x04f57738(uVar19,**(undefined4 **)(iRam03688874 + 0x3688750),0);
          if (iVar20 == 0) {
            iVar20 = func_0x04f57738(uVar19,**(undefined4 **)(iRam03688878 + 0x3688780),0);
            uVar29 = iVar20 == 0;
            uVar28 = 1;
            if ((bool)uVar29) {
              func_0x024f83b8(*(undefined4 *)(iRam0368887c + 0x3688800));
              uVar11 = func_0x024f83c8();
              uVar3 = func_0x024f83b8(*(undefined4 *)(iRam03688880 + 0x3688814));
              auStack_20[0] = 0;
              func_0x0509473c(uVar11,uVar3,uVar19,0);
              func_0x024f83c0(uVar11,iVar17);
              puVar27 = (undefined1 *)0x368883c;
              uVar35 = func_0x024f83bc();
              iVar20 = (int)((ulonglong)uVar35 >> 0x20);
              iVar1 = (int)uVar35;
              bVar30 = false;
              bVar32 = uVar28;
              if ((bool)uVar29) {
                unaff_r11 = iVar20 - (!(bool)uVar28 + 0x2f00);
                bVar32 = (undefined1 *)0xffffffe7 < auStack_20 ||
                         CARRY4((uint)&stack0xfffffff8,(uint)(byte)uVar28);
                puVar23 = (undefined4 *)(&stack0xfffffff8 + (byte)uVar28);
                bVar30 = &stack0xfffffff8 + (byte)uVar28 == (undefined1 *)0x0;
              }
              bVar33 = bVar32;
              if (bVar30) {
                bVar33 = 0xee9777b3 < bVar32;
              }
              bVar30 = bVar30 && bVar32 == 0xee9777b4;
              bVar32 = bVar33;
              if (bVar30) {
                bVar32 = 0xf09777af < bVar33;
              }
              bVar30 = bVar30 && bVar33 == 0xf09777b0;
              bVar33 = bVar32;
              if (bVar30) {
                bVar33 = 0xf29777ab < bVar32;
              }
              bVar30 = bVar30 && bVar32 == 0xf29777ac;
              bVar32 = bVar33;
              if (bVar30) {
                bVar32 = 0xf49777a7 < bVar33;
              }
              bVar30 = bVar30 && bVar33 == 0xf49777a8;
              bVar33 = bVar32;
              if (bVar30) {
                bVar33 = 0xf69777a3 < bVar32;
              }
              bVar30 = bVar30 && bVar32 == 0xf69777a4;
              bVar32 = bVar33;
              if (bVar30) {
                bVar32 = 0xf897779f < bVar33;
              }
              bVar30 = bVar30 && bVar33 == 0xf89777a0;
              bVar33 = bVar32;
              if (bVar30) {
                bVar33 = (undefined1 *)0xfffffd4f < puVar23 ||
                         CARRY4((uint)((int)puVar23 + 0x2b0),(uint)bVar32);
              }
              bVar30 = bVar30 && (undefined1 *)((int)puVar23 + bVar32 + 0x2b0) == (undefined1 *)0x0;
              bVar32 = bVar33;
              if (bVar30) {
                unaff_r11 = iVar20 - (uint)!(bool)bVar33;
                bVar32 = 0x84977793 < bVar33;
              }
              bVar30 = bVar30 && bVar33 == 0x84977794;
              bVar33 = bVar32;
              if (bVar30) {
                bVar33 = 0xa097778f < bVar32;
              }
              bVar30 = bVar30 && bVar32 == 0xa0977790;
              bVar32 = bVar33;
              if (bVar30) {
                bVar32 = 0xc897778b < bVar33;
              }
              bVar30 = bVar30 && bVar33 == 0xc897778c;
              bVar33 = bVar32;
              if (bVar30) {
                bVar33 = 0xc977784 < bVar32;
              }
              bVar30 = bVar30 && bVar32 == 0xc977785;
              bVar32 = bVar33;
              if (bVar30) {
                bVar32 = 0xac977780 < bVar33;
              }
              bVar30 = bVar30 && bVar33 == 0xac977781;
              bVar33 = bVar32;
              if (bVar30) {
                bVar33 = 0x8c97777d < bVar32;
              }
              bVar31 = false;
              bVar34 = bVar33;
              if (bVar30 && bVar32 == 0x8c97777e) {
                bVar34 = (undefined1 *)0xff77ffff < puVar23 ||
                         CARRY4((uint)((int)puVar23 + 0x880000),(uint)bVar33);
                puVar27 = (undefined1 *)((int)puVar23 + (int)(&UNK_00880000 + bVar33));
                bVar31 = puVar27 == (undefined1 *)0x0;
              }
              if (bVar31) {
                unaff_r10 = (int *)(puVar27 + bVar34 + 0x3b0000);
              }
              *(undefined1 **)((int)puVar23 + -4) = puVar27;
              *(int *)((int)puVar23 + -8) = unaff_r11;
              *(undefined4 *)((int)puVar23 + -0xc) = 0;
              *(undefined4 *)((int)puVar23 + -0x10) = uVar19;
              *(undefined4 *)((int)puVar23 + -0x14) = uVar11;
              *(int *)((int)puVar23 + -0x18) = iVar17;
              puVar8 = *(undefined4 **)(iVar20 + 0x1c);
              if (puVar8 == (undefined4 *)0x0) {
                func_0x024f83cc(*(undefined4 *)(iRam03688b20 + 0x36888ac));
                func_0x024f83cc(*(undefined4 *)(iRam03688b24 + 0x36888b8));
                func_0x024f83cc(*(undefined4 *)(iRam03688b28 + 0x36888c4));
                func_0x024f83cc(*(undefined4 *)(iRam03688b2c + 0x36888d0));
                func_0x024f83cc(*(undefined4 *)(iRam03688b30 + 0x36888dc));
                func_0x024f83cc(*(undefined4 *)(iRam03688b34 + 0x36888e8));
                func_0x024f83cc(*(undefined4 *)(iRam03688b38 + 0x36888f4));
                func_0x024f83cc(*(undefined4 *)(iRam03688b3c + 0x3688900));
                puVar8 = *(undefined4 **)(iVar20 + 0x1c);
                if (puVar8 == (undefined4 *)0x0) {
                  func_0x024f83f8(iVar20);
                  puVar8 = *(undefined4 **)(iVar20 + 0x1c);
                }
              }
              uVar19 = *puVar8;
              iVar17 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(iRam03688b40 + 0x3688924) + 0x74) == 0) {
                func_0x024f83d8();
              }
              uVar19 = func_0x05171434(uVar19,0);
              if (iVar17 == 0) {
                func_0x024f83d4();
              }
              pcVar4 = (code *)func_0x0475399c(iVar17,uVar19,
                                               **(undefined4 **)(iRam03688b44 + 0x3688968));
              iVar17 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam03688b48 + 0x3688984),0);
              if (iVar17 == 0) {
                iVar17 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam03688b4c + 0x36889b0),0);
                if (iVar17 == 0) {
                  iVar17 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam03688b50 + 0x36889dc),0);
                  if (iVar17 == 0) {
                    iVar17 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam03688b54 + 0x3688a08),0);
                    if (iVar17 == 0) {
                      iVar17 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam03688b58 + 0x3688a34),0)
                      ;
                      if (iVar17 == 0) {
                        iVar17 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam03688b5c + 0x3688a64),
                                                 0);
                        uVar29 = iVar17 == 0;
                        uVar28 = 1;
                        if ((bool)uVar29) {
                          func_0x024f83b8(*(undefined4 *)(iRam03688b60 + 0x3688ae4));
                          uVar19 = func_0x024f83c8();
                          uVar11 = func_0x024f83b8(*(undefined4 *)(iRam03688b64 + 0x3688af8));
                          *(undefined4 *)((int)puVar23 + -0x20) = 0;
                          func_0x0509473c(uVar19,uVar11,pcVar4,0);
                          func_0x024f83c0(uVar19,iVar20);
                          puVar27 = (undefined1 *)0x3688b20;
                          uVar35 = func_0x024f83bc();
                          iVar17 = (int)((ulonglong)uVar35 >> 0x20);
                          iVar1 = (int)uVar35;
                          bVar32 = uVar28;
                          if ((bool)uVar29) {
                            unaff_r11 = iVar17 - (!(bool)uVar28 + 0xd8000);
                            bVar32 = (undefined1 *)0xfffff2ff < (undefined1 *)((int)puVar23 + -0x20)
                                     || CARRY4((uint)((int)puVar23 + 0xce0),(uint)(byte)uVar28);
                          }
                          bVar33 = bVar32;
                          if ((bool)uVar29 &&
                              (undefined1 *)((int)puVar23 + (byte)uVar28 + 0xce0) ==
                              (undefined1 *)0x0) {
                            bVar33 = 0xbc9774ca < bVar32;
                          }
                          bVar30 = ((bool)uVar29 &&
                                   (undefined1 *)((int)puVar23 + (byte)uVar28 + 0xce0) ==
                                   (undefined1 *)0x0) && bVar32 == 0xbc9774cb;
                          bVar32 = bVar33;
                          if (bVar30) {
                            bVar32 = 0x3c9774c7 < bVar33;
                          }
                          bVar30 = bVar30 && bVar33 == 0x3c9774c8;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = 0xbc9774c3 < bVar32;
                          }
                          bVar30 = bVar30 && bVar32 == 0xbc9774c4;
                          bVar32 = bVar33;
                          if (bVar30) {
                            bVar32 = 0x3c9774c0 < bVar33;
                          }
                          bVar30 = bVar30 && bVar33 == 0x3c9774c1;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = 0xbc9774bc < bVar32;
                          }
                          bVar30 = bVar30 && bVar32 == 0xbc9774bd;
                          bVar32 = bVar33;
                          if (bVar30) {
                            bVar32 = 0x3c9774b9 < bVar33;
                          }
                          bVar30 = bVar30 && bVar33 == 0x3c9774ba;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = (undefined1 *)0xffff37ff < (undefined1 *)((int)puVar23 + -0x20)
                                     || CARRY4((uint)((int)puVar23 + 0xc7e0),(uint)bVar32);
                          }
                          bVar30 = bVar30 && (undefined1 *)((int)puVar23 + bVar32 + 0xc7e0) ==
                                             (undefined1 *)0x0;
                          bVar32 = bVar33;
                          if (bVar30) {
                            unaff_r11 = iVar17 - (!(bool)bVar33 + 0x1c000);
                            bVar32 = 0xfc97748a < bVar33;
                          }
                          bVar30 = bVar30 && bVar33 == 0xfc97748b;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = 0xfc97748d < bVar32;
                          }
                          bVar30 = bVar30 && bVar32 == 0xfc97748e;
                          bVar32 = bVar33;
                          if (bVar30) {
                            bVar32 = 0xfc977493 < bVar33;
                          }
                          bVar30 = bVar30 && bVar33 == 0xfc977494;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = 0xfc97749d < bVar32;
                          }
                          bVar30 = bVar30 && bVar32 == 0xfc97749e;
                          bVar32 = bVar33;
                          if (bVar30) {
                            bVar32 = 0xfc9773af < bVar33;
                          }
                          bVar30 = bVar30 && bVar33 == 0xfc9773b0;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = 0xfc9773e3 < bVar32;
                          }
                          bVar31 = false;
                          bVar34 = bVar33;
                          if (bVar30 && bVar32 == 0xfc9773e4) {
                            bVar34 = (undefined1 *)0xd6ffffff < (undefined1 *)((int)puVar23 + -0x20)
                                     || CARRY4((uint)((int)puVar23 + 0x28ffffe0),(uint)bVar33);
                            puVar27 = (undefined1 *)((int)puVar23 + bVar33 + 0x28ffffe0);
                            bVar31 = puVar27 == (undefined1 *)0x0;
                          }
                          if (bVar31) {
                            unaff_r10 = (int *)(puVar27 + bVar34 + 0x200000);
                          }
                          *(undefined1 **)((int)puVar23 + -0x24) = puVar27;
                          *(int *)((int)puVar23 + -0x28) = unaff_r11;
                          *(int **)((int)puVar23 + -0x2c) = unaff_r10;
                          *(undefined4 *)((int)puVar23 + -0x30) = unaff_r9;
                          *(undefined4 *)((int)puVar23 + -0x34) = unaff_r8;
                          *(undefined4 *)((int)puVar23 + -0x38) = 0;
                          *(code **)((int)puVar23 + -0x3c) = pcVar4;
                          *(undefined4 *)((int)puVar23 + -0x40) = uVar19;
                          *(int *)((int)puVar23 + -0x44) = iVar20;
                          puVar27 = (undefined1 *)((int)puVar23 + -0x28);
                          *(undefined4 *)((int)puVar23 + -0x4c) =
                               **(undefined4 **)(iRam03688e58 + 0x3688b88);
                          iVar20 = *(int *)(iVar17 + 0x1c);
                          if (iVar20 == 0) {
                            func_0x024f83cc(*(undefined4 *)(iRam03688e5c + 0x3688ba4));
                            func_0x024f83cc(*(undefined4 *)(iRam03688e60 + 0x3688bb0));
                            func_0x024f83cc(*(undefined4 *)(iRam03688e64 + 0x3688bbc));
                            func_0x024f83cc(*(undefined4 *)(iRam03688e68 + 0x3688bc8));
                            func_0x024f83cc(*(undefined4 *)(iRam03688e6c + 0x3688bd4));
                            func_0x024f83cc(*(undefined4 *)(iRam03688e70 + 0x3688be0));
                            iVar20 = *(int *)(iVar17 + 0x1c);
                            if (iVar20 == 0) {
                              func_0x024f83f8(iVar17);
                              iVar20 = *(int *)(iVar17 + 0x1c);
                            }
                          }
                          puVar8 = (undefined4 *)
                                   ((int)puVar23 +
                                   (-0x60 - (*(int *)(*(int *)(iVar20 + 0xc) + 0x84) + 7U &
                                            0xfffffff8)));
                          iVar18 = **(int **)(iRam03688e74 + 0x3688c1c);
                          iVar20 = *(int *)(iVar18 + 0x1c);
                          if (iVar20 == 0) {
                            func_0x024f83f8(iVar18);
                            iVar20 = *(int *)(iVar18 + 0x1c);
                          }
                          iVar20 = *(int *)(iVar20 + 8);
                          if ((*(ushort *)(iVar20 + 0xbd) & 1) == 0) {
                            iVar20 = func_0x024f83fc();
                          }
                          if (*(int *)(iVar20 + 0x74) == 0) {
                            func_0x024f83d8();
                          }
                          iVar20 = *(int *)(*(int *)(iVar18 + 0x1c) + 8);
                          if ((*(ushort *)(iVar20 + 0xbd) & 1) == 0) {
                            iVar20 = func_0x024f83fc();
                          }
                          piVar2 = (int *)**(int **)(iVar20 + 0x5c);
                          if (iVar1 == 0) {
                            func_0x024f83d4();
                          }
                          uVar19 = func_0x0357e78c(iVar1,**(undefined4 **)(iRam03688e7c + 0x3688ca0)
                                                   ,piVar2,**(undefined4 **)
                                                             (iRam03688e78 + 0x3688c94));
                          *(undefined4 *)((int)puVar23 + -0x60) = uVar19;
                          if ((*(ushort *)(**(int **)(iVar17 + 0x1c) + 0xbd) & 1) == 0) {
                            func_0x024f83fc();
                          }
                          piVar14 = (int *)func_0x024f83c8();
                          (*(code *)**(undefined4 **)(*(int *)(iVar17 + 0x1c) + 4))(piVar14);
                          if (0 < *(int *)((int)puVar23 + -0x60)) {
                            unaff_r10 = (int *)0x0;
                            do {
                              piVar2 = (int *)func_0x024f8400(**(undefined4 **)
                                                                (iRam03688e80 + 0x3688d08),1);
                              puVar5 = *(undefined4 **)(iRam03688e84 + 0x3688d20);
                              *(int **)((int)puVar23 + -0x5c) = unaff_r10;
                              iVar20 = func_0x024f83c4(*puVar5,(undefined1 *)((int)puVar23 + -0x5c))
                              ;
                              if (piVar2 == (int *)0x0) {
                                func_0x024f83d4();
                              }
                              if ((iVar20 != 0) &&
                                 (iVar18 = func_0x024f83e4(iVar20,*(undefined4 *)(*piVar2 + 0x20)),
                                 iVar18 == 0)) {
                                uVar19 = func_0x024f83e8();
                                func_0x024f83c0(uVar19,0);
                              }
                              if (piVar2[3] == 0) {
                                func_0x024f83ec();
                              }
                              piVar2[4] = iVar20;
                              func_0x024f83f0(piVar2 + 4,iVar20);
                              if (iVar1 == 0) {
                                func_0x024f83d4();
                              }
                              puVar5 = *(undefined4 **)(*(int *)(iVar17 + 0x1c) + 8);
                              uVar11 = **(undefined4 **)(iRam03688e88 + 0x3688dac);
                              uVar19 = *puVar5;
                              *(undefined4 **)((int)puVar23 + -0x50) = puVar8;
                              pcVar4 = (code *)puVar5[2];
                              *(int **)((int)puVar23 + -0x54) = piVar2;
                              *(undefined4 *)((int)puVar23 + -0x58) = uVar11;
                              puVar8[-2] = puVar8;
                              (*pcVar4)(uVar19,puVar5,iVar1,(undefined1 *)((int)puVar23 + -0x58));
                              if (piVar14 == (int *)0x0) {
                                func_0x024f83d4();
                              }
                              puVar9 = *(undefined4 **)(*(int *)(iVar17 + 0x1c) + 0x10);
                              uVar19 = *puVar9;
                              puVar5 = puVar8;
                              if (-1 < *(int *)(*(int *)(*(int *)(iVar17 + 0x1c) + 0xc) + 0x14)) {
                                puVar5 = (undefined4 *)*puVar8;
                              }
                              pcVar4 = (code *)puVar9[2];
                              *(undefined4 **)((int)puVar23 + -0x58) = puVar5;
                              puVar8[-2] = puVar5;
                              (*pcVar4)(uVar19,puVar9,piVar14,(undefined1 *)((int)puVar23 + -0x58));
                              unaff_r10 = (int *)((int)unaff_r10 + 1);
                            } while (*(int **)((int)puVar23 + -0x60) != unaff_r10);
                          }
                          uVar6 = **(uint **)(iRam03688e8c + 0x3688e40);
                          bVar32 = *(uint *)((int)puVar23 + -0x4c) <= uVar6;
                          bVar30 = uVar6 == *(uint *)((int)puVar23 + -0x4c);
                          if (bVar30) {
                            return piVar14;
                          }
                          iVar18 = 0x3688e58;
                          uVar35 = func_0x024f840c(uVar6);
                          iVar20 = (int)((ulonglong)uVar35 >> 0x20);
                          bVar31 = false;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = (undefined4 *)0xffffffe7 < puVar8 ||
                                     CARRY4((uint)(puVar8 + 6),(uint)bVar32);
                            iVar18 = (int)puVar8 + bVar32 + 0x18;
                            bVar31 = iVar18 == 0;
                          }
                          bVar32 = bVar33;
                          if (bVar31) {
                            bVar32 = (undefined4 *)0xfffffbff < puVar8 ||
                                     CARRY4((uint)(puVar8 + 0x100),(uint)bVar33);
                          }
                          bVar31 = bVar31 && (int)puVar8 + bVar33 + 0x400 == 0;
                          bVar33 = bVar32;
                          if (bVar31) {
                            bVar33 = (undefined4 *)0xbffffff4 < puVar8 ||
                                     CARRY4((int)puVar8 + 0x4000000b,(uint)bVar32);
                          }
                          bVar31 = bVar31 && (int)puVar8 + bVar32 + 0x4000000b == 0;
                          bVar32 = bVar33;
                          if (bVar31) {
                            bVar32 = (undefined4 *)0xffffd7ff < puVar8 ||
                                     CARRY4((uint)(puVar8 + 0xa00),(uint)bVar33);
                          }
                          bVar31 = bVar31 && (int)puVar8 + bVar33 + 0x2800 == 0;
                          bVar33 = bVar32;
                          if (bVar31) {
                            bVar33 = (undefined4 *)0xbffffff1 < puVar8 ||
                                     CARRY4((int)puVar8 + 0x4000000e,(uint)bVar32);
                          }
                          bVar30 = false;
                          puVar5 = puVar8;
                          bVar34 = bVar33;
                          if (bVar31 && (int)puVar8 + bVar32 + 0x4000000e == 0) {
                            bVar34 = (undefined4 *)0xfffffff0 < puVar8 ||
                                     CARRY4((int)puVar8 + 0xf,(uint)bVar33);
                            puVar5 = (undefined4 *)((int)puVar8 + bVar33 + 0xf);
                            bVar30 = (undefined1 *)((int)puVar8 + bVar33 + 0xf) == (undefined1 *)0x0
                            ;
                          }
                          bVar32 = bVar34;
                          if (bVar30) {
                            puVar27 = (undefined1 *)(iVar20 - (!(bool)bVar34 + 0x1c000));
                            bVar32 = (undefined1 *)0x7ffffffb < puVar5 ||
                                     CARRY4((uint)(puVar5 + -0x1fffffff),(uint)bVar34);
                          }
                          bVar30 = bVar30 && (int)puVar5 + bVar34 + 0x80000004 == 0;
                          bVar33 = bVar32;
                          if (bVar30) {
                            bVar33 = (undefined1 *)0xffffdfff < puVar5 ||
                                     CARRY4((uint)(puVar5 + 0x800),(uint)bVar32);
                          }
                          bVar31 = false;
                          bVar34 = bVar33;
                          if (bVar30 && (int)puVar5 + bVar32 + 0x2000 == 0) {
                            bVar34 = (undefined1 *)0xffffff8f < puVar5 ||
                                     CARRY4((uint)(puVar5 + 0x1c),(uint)bVar33);
                            puVar24 = (undefined1 *)((int)puVar5 + bVar33 + 0x70);
                            puVar5 = (undefined4 *)((int)puVar5 + bVar33 + 0x70);
                            bVar31 = puVar24 == (undefined1 *)0x0;
                          }
                          bVar32 = bVar34;
                          if (bVar31) {
                            bVar32 = (undefined1 *)0xffffffd6 < puVar5 ||
                                     CARRY4((uint)((int)puVar5 + 0x29),(uint)bVar34);
                          }
                          bVar33 = bVar32;
                          if (bVar31 && (undefined1 *)((int)puVar5 + bVar34 + 0x29) ==
                                        (undefined1 *)0x0) {
                            bVar33 = (undefined1 *)0xfff3bfff < puVar5 ||
                                     CARRY4((uint)((int)puVar5 + 0xc4000),(uint)bVar32);
                          }
                          if ((bVar31 &&
                              (undefined1 *)((int)puVar5 + bVar34 + 0x29) == (undefined1 *)0x0) &&
                              (undefined1 *)((int)puVar5 + bVar32 + 0xc4000) == (undefined1 *)0x0) {
                            puVar27 = (undefined1 *)(iVar20 - (!(bool)bVar33 + 0x290000));
                            puVar5 = (undefined4 *)((int)puVar5 + bVar33 + 0x1800);
                          }
                          *(int *)((int)puVar5 + -4) = iVar18;
                          *(undefined1 **)((int)puVar5 + -8) = puVar27;
                          *(int **)((int)puVar5 + -0xc) = unaff_r10;
                          *(int **)((int)puVar5 + -0x10) = piVar14;
                          *(int *)((int)puVar5 + -0x14) = iVar1;
                          *(int *)((int)puVar5 + -0x18) = iVar17;
                          *(code **)((int)puVar5 + -0x1c) = pcVar4;
                          *(int **)((int)puVar5 + -0x20) = piVar2;
                          *(undefined4 **)((int)puVar5 + -0x24) = puVar8;
                          puVar27 = (undefined1 *)((int)puVar5 + -8);
                          *(undefined4 *)((int)puVar5 + -0x2c) =
                               **(undefined4 **)(iRam036898d0 + 0x3688eb0);
                          iVar1 = *(int *)(iVar20 + 0x1c);
                          if (iVar1 == 0) {
                            func_0x024f83cc(*(undefined4 *)(iRam036898d4 + 0x3688ecc));
                            func_0x024f83cc(*(undefined4 *)(iRam036898d8 + 0x3688ed8));
                            func_0x024f83cc(*(undefined4 *)(iRam036898dc + 0x3688ee4));
                            func_0x024f83cc(*(undefined4 *)(iRam036898e0 + 0x3688ef0));
                            func_0x024f83cc(*(undefined4 *)(iRam036898e4 + 0x3688efc));
                            func_0x024f83cc(*(undefined4 *)(iRam036898e8 + 0x3688f08));
                            func_0x024f83cc(*(undefined4 *)(iRam036898ec + 0x3688f14));
                            func_0x024f83cc(*(undefined4 *)(iRam036898f0 + 0x3688f20));
                            func_0x024f83cc(*(undefined4 *)(iRam036898f4 + 0x3688f2c));
                            func_0x024f83cc(*(undefined4 *)(iRam036898f8 + 0x3688f38));
                            iVar1 = *(int *)(iVar20 + 0x1c);
                            if (iVar1 == 0) {
                              func_0x024f83f8(iVar20);
                              iVar1 = *(int *)(iVar20 + 0x1c);
                            }
                          }
                          iVar17 = *(int *)(*(int *)(iVar1 + 0xc) + 0x84);
                          iVar18 = *(int *)(*(int *)(iVar1 + 0x14) + 0x84);
                          uVar6 = iVar17 + 7U & 0xfffffff8;
                          puVar21 = (undefined1 *)((int)puVar5 + (-0x68 - uVar6));
                          *(uint *)((int)puVar5 + -0x50) = (int)puVar21 - uVar6;
                          uVar15 = iVar18 + 7U & 0xfffffff8;
                          iVar22 = ((int)puVar21 - uVar6) - uVar15;
                          *(uint *)((int)puVar5 + -0x54) = iVar22 - uVar15;
                          iVar1 = (iVar22 - uVar15) - uVar6;
                          *(int *)((int)puVar5 + -0x4c) = iVar1;
                          *(int *)((int)puVar5 + -0x48) = iVar17;
                          func_0x024f8420();
                          puVar7 = (undefined1 *)(iVar1 - uVar15);
                          *(undefined1 **)((int)puVar5 + -0x5c) = puVar7;
                          *(int *)((int)puVar5 + -0x58) = iVar18;
                          func_0x024f8420(puVar7,iVar18);
                          iVar17 = **(int **)(iRam036898fc + 0x3688fd0);
                          iVar1 = *(int *)(iVar17 + 0x1c);
                          if (iVar1 == 0) {
                            func_0x024f83f8(iVar17);
                            iVar1 = *(int *)(iVar17 + 0x1c);
                          }
                          iVar1 = *(int *)(iVar1 + 8);
                          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                            iVar1 = func_0x024f83fc();
                          }
                          if (*(int *)(iVar1 + 0x74) == 0) {
                            func_0x024f83d8();
                          }
                          iVar1 = *(int *)(*(int *)(iVar17 + 0x1c) + 8);
                          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                            iVar1 = func_0x024f83fc();
                          }
                          uVar19 = **(undefined4 **)(iVar1 + 0x5c);
                          if ((int)uVar35 == 0) {
                            func_0x024f83d4();
                          }
                          iVar1 = func_0x0357e89c((int)uVar35,
                                                  **(undefined4 **)(iRam03689904 + 0x3689054),uVar19
                                                  ,**(undefined4 **)(iRam03689900 + 0x3689048));
                          piVar2 = *(int **)(iRam03689908 + 0x368906c);
                          *(int *)((int)puVar5 + -0x60) = iVar1;
                          iVar18 = *piVar2;
                          iVar17 = *(int *)(iVar18 + 0x1c);
                          if (iVar17 == 0) {
                            func_0x024f83f8(iVar18);
                            iVar17 = *(int *)(iVar18 + 0x1c);
                          }
                          iVar17 = *(int *)(iVar17 + 8);
                          if ((*(ushort *)(iVar17 + 0xbd) & 1) == 0) {
                            iVar17 = func_0x024f83fc();
                          }
                          if (*(int *)(iVar17 + 0x74) == 0) {
                            func_0x024f83d8();
                          }
                          iVar17 = *(int *)(*(int *)(iVar18 + 0x1c) + 8);
                          if ((*(ushort *)(iVar17 + 0xbd) & 1) == 0) {
                            iVar17 = func_0x024f83fc();
                          }
                          uVar19 = **(undefined4 **)(iVar17 + 0x5c);
                          if (iVar1 == 0) {
                            func_0x024f83d4();
                          }
                          piVar2 = (int *)func_0x0357e89c(iVar1,**(undefined4 **)
                                                                  (iRam03689910 + 0x36890f0),uVar19,
                                                          **(undefined4 **)
                                                            (iRam0368990c + 0x36890e4));
                          if ((*(ushort *)(**(int **)(iVar20 + 0x1c) + 0xbd) & 1) == 0) {
                            func_0x024f83fc();
                          }
                          uVar19 = func_0x024f83c8();
                          (*(code *)**(undefined4 **)(*(int *)(iVar20 + 0x1c) + 4))(uVar19);
                          *(undefined4 *)((int)puVar5 + -0x44) = uVar19;
                          while( true ) {
                            iVar17 = **(int **)(iRam03689934 + 0x3689144);
                            iVar1 = *(int *)(iVar17 + 0x1c);
                            if (iVar1 == 0) {
                              func_0x024f83f8(iVar17);
                              iVar1 = *(int *)(iVar17 + 0x1c);
                            }
                            iVar1 = *(int *)(iVar1 + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            if (*(int *)(iVar1 + 0x74) == 0) {
                              func_0x024f83d8();
                            }
                            iVar1 = *(int *)(*(int *)(iVar17 + 0x1c) + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            uVar19 = **(undefined4 **)(iVar1 + 0x5c);
                            if (piVar2 == (int *)0x0) {
                              func_0x024f83d4();
                            }
                            iVar1 = func_0x0357e638(piVar2,**(undefined4 **)
                                                             (iRam0368993c + 0x36891c4),uVar19,
                                                    **(undefined4 **)(iRam03689938 + 0x36891b8));
                            if (iVar1 == 0) break;
                            iVar17 = **(int **)(iRam03689914 + 0x36891e4);
                            iVar1 = *(int *)(iVar17 + 0x1c);
                            if (iVar1 == 0) {
                              func_0x024f83f8(iVar17);
                              iVar1 = *(int *)(iVar17 + 0x1c);
                            }
                            iVar1 = *(int *)(iVar1 + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            if (*(int *)(iVar1 + 0x74) == 0) {
                              func_0x024f83d8();
                            }
                            iVar1 = *(int *)(*(int *)(iVar17 + 0x1c) + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            uVar19 = **(undefined4 **)(iVar1 + 0x5c);
                            if (piVar2 == (int *)0x0) {
                              func_0x024f83d4();
                            }
                            unaff_r10 = (int *)func_0x0357e89c(piVar2,**(undefined4 **)
                                                                        (iRam0368991c + 0x3689264),
                                                               uVar19,**(undefined4 **)
                                                                        (iRam03689918 + 0x3689258));
                            iVar17 = **(int **)(iRam03689920 + 0x3689280);
                            iVar1 = *(int *)(iVar17 + 0x1c);
                            if (iVar1 == 0) {
                              func_0x024f83f8(iVar17);
                              iVar1 = *(int *)(iVar17 + 0x1c);
                            }
                            iVar1 = *(int *)(iVar1 + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            if (*(int *)(iVar1 + 0x74) == 0) {
                              func_0x024f83d8();
                            }
                            iVar1 = *(int *)(*(int *)(iVar17 + 0x1c) + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            uVar19 = **(undefined4 **)(iVar1 + 0x5c);
                            if (unaff_r10 == (int *)0x0) {
                              func_0x024f83d4();
                            }
                            puVar8 = *(undefined4 **)(*(int *)(iVar20 + 0x1c) + 8);
                            uVar3 = **(undefined4 **)(iRam03689924 + 0x36892fc);
                            uVar11 = *puVar8;
                            *(undefined1 **)((int)puVar5 + -0x38) = puVar21;
                            pcVar4 = (code *)puVar8[2];
                            *(undefined4 *)((int)puVar5 + -0x3c) = uVar19;
                            *(undefined4 *)((int)puVar5 + -0x40) = uVar3;
                            *(undefined1 **)(puVar7 + -8) = puVar21;
                            (*pcVar4)(uVar11,puVar8,unaff_r10,(undefined1 *)((int)puVar5 + -0x40));
                            func_0x024f870c(*(undefined4 *)((int)puVar5 + -0x4c),puVar21,
                                            *(undefined4 *)((int)puVar5 + -0x48));
                            iVar17 = **(int **)(iRam03689928 + 0x3689344);
                            iVar1 = *(int *)(iVar17 + 0x1c);
                            if (iVar1 == 0) {
                              func_0x024f83f8(iVar17);
                              iVar1 = *(int *)(iVar17 + 0x1c);
                            }
                            iVar1 = *(int *)(iVar1 + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            if (*(int *)(iVar1 + 0x74) == 0) {
                              func_0x024f83d8();
                            }
                            iVar1 = *(int *)(*(int *)(iVar17 + 0x1c) + 8);
                            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                              iVar1 = func_0x024f83fc();
                            }
                            uVar19 = **(undefined4 **)(iVar1 + 0x5c);
                            if (unaff_r10 == (int *)0x0) {
                              func_0x024f83d4();
                            }
                            puVar8 = *(undefined4 **)(*(int *)(iVar20 + 0x1c) + 0x10);
                            uVar3 = **(undefined4 **)(iRam0368992c + 0x36893c0);
                            uVar11 = *puVar8;
                            *(int *)((int)puVar5 + -0x38) = iVar22;
                            pcVar4 = (code *)puVar8[2];
                            *(undefined4 *)((int)puVar5 + -0x3c) = uVar19;
                            *(undefined4 *)((int)puVar5 + -0x40) = uVar3;
                            *(int *)(puVar7 + -8) = iVar22;
                            (*pcVar4)(uVar11,puVar8,unaff_r10,(undefined1 *)((int)puVar5 + -0x40));
                            uVar11 = *(undefined4 *)((int)puVar5 + -0x5c);
                            uVar19 = *(undefined4 *)((int)puVar5 + -0x58);
                            func_0x024f870c(uVar11,iVar22,uVar19);
                            func_0x024f870c(*(undefined4 *)((int)puVar5 + -0x50),
                                            *(undefined4 *)((int)puVar5 + -0x4c),
                                            *(undefined4 *)((int)puVar5 + -0x48));
                            func_0x024f870c(*(undefined4 *)((int)puVar5 + -0x54),uVar11,uVar19);
                            if (*(int *)((int)puVar5 + -0x44) == 0) {
                              func_0x024f83d4();
                            }
                            iVar1 = *(int *)(iVar20 + 0x1c);
                            puVar9 = *(undefined4 **)((int)puVar5 + -0x54);
                            puVar8 = *(undefined4 **)((int)puVar5 + -0x50);
                            if (-1 < *(int *)(*(int *)(iVar1 + 0xc) + 0x14)) {
                              puVar8 = (undefined4 *)*puVar8;
                            }
                            puVar10 = *(undefined4 **)(iVar1 + 0x18);
                            if (-1 < *(int *)(*(int *)(iVar1 + 0x14) + 0x14)) {
                              puVar9 = (undefined4 *)*puVar9;
                            }
                            uVar19 = *puVar10;
                            *(undefined4 **)((int)puVar5 + -0x30) = puVar9;
                            pcVar4 = (code *)puVar10[2];
                            *(undefined4 **)((int)puVar5 + -0x34) = puVar8;
                            uVar11 = *(undefined4 *)((int)puVar5 + -0x44);
                            *(undefined4 **)(puVar7 + -8) = puVar9;
                            (*pcVar4)(uVar19,puVar10,uVar11,(undefined1 *)((int)puVar5 + -0x34));
                            if (unaff_r10 != (int *)0x0) {
                              iVar1 = *unaff_r10;
                              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                              if (uVar6 != 0) {
                                piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                                do {
                                  if (piVar14[-1] == **(int **)(iRam03689930 + 0x36894ac)) {
                                    puVar8 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
                                    goto LAB_036894f4;
                                  }
                                  uVar6 = uVar6 - 1;
                                  piVar14 = piVar14 + 2;
                                } while (uVar6 != 0);
                              }
                              puVar8 = (undefined4 *)
                                       func_0x024f8424(unaff_r10,
                                                       **(int **)(iRam03689930 + 0x36894ac),0);
LAB_036894f4:
                              (*(code *)*puVar8)(unaff_r10,puVar8[1]);
                            }
                          }
                          iVar1 = 0;
                          piVar14 = *(int **)((int)puVar5 + -0x44);
LAB_03689548:
                          if (piVar2 != (int *)0x0) {
                            iVar17 = *piVar2;
                            uVar6 = (uint)*(ushort *)(iVar17 + 0xb6);
                            if (uVar6 != 0) {
                              piVar12 = (int *)(*(int *)(iVar17 + 0x58) + 4);
                              do {
                                if (piVar12[-1] == **(int **)(iRam03689944 + 0x3689560)) {
                                  puVar8 = (undefined4 *)(iVar17 + *piVar12 * 8 + 0xc0);
                                  goto LAB_036895a8;
                                }
                                uVar6 = uVar6 - 1;
                                piVar12 = piVar12 + 2;
                              } while (uVar6 != 0);
                            }
                            puVar8 = (undefined4 *)
                                     func_0x024f8424(piVar2,**(int **)(iRam03689944 + 0x3689560),0);
LAB_036895a8:
                            (*(code *)*puVar8)(piVar2,puVar8[1]);
                          }
                          piVar2 = (int *)0x0;
                          if (iVar1 != 0) {
                            func_0x024f8428(iVar1);
                          }
                          do {
                            piVar12 = *(int **)((int)puVar5 + -0x60);
                            if (piVar12 != (int *)0x0) {
                              iVar1 = *piVar12;
                              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                              if (uVar6 != 0) {
                                piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                                do {
                                  if (piVar13[-1] == **(int **)(iRam0368994c + 0x36895ec)) {
                                    puVar8 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                                    goto LAB_03689634;
                                  }
                                  uVar6 = uVar6 - 1;
                                  piVar13 = piVar13 + 2;
                                } while (uVar6 != 0);
                              }
                              puVar8 = (undefined4 *)
                                       func_0x024f8424(piVar12,**(int **)(iRam0368994c + 0x36895ec),
                                                       0);
LAB_03689634:
                              (*(code *)*puVar8)(piVar12,puVar8[1]);
                            }
                            if (piVar2 != (int *)0x0) {
                              func_0x024f8428(piVar2);
                            }
                            if (**(int **)(iRam03689950 + 0x3689660) ==
                                *(int *)((int)puVar5 + -0x2c)) {
                              return piVar14;
                            }
                            func_0x024f840c(**(int **)(iRam03689950 + 0x3689660));
                            if (unaff_r10 != (int *)0x0) {
                              iVar1 = *unaff_r10;
                              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                              if (uVar6 != 0) {
                                piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                                do {
                                  if (piVar14[-1] == **(int **)(iRam03689940 + 0x3689698)) {
                                    puVar8 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
                                    goto LAB_036896e0;
                                  }
                                  uVar6 = uVar6 - 1;
                                  piVar14 = piVar14 + 2;
                                } while (uVar6 != 0);
                              }
                              puVar8 = (undefined4 *)
                                       func_0x024f8424(unaff_r10,
                                                       **(int **)(iRam03689940 + 0x3689698),0);
LAB_036896e0:
                              (*(code *)*puVar8)(unaff_r10,puVar8[1]);
                            }
                            uVar19 = *(undefined4 *)((int)puVar5 + -100);
                            if (extraout_r1 == 1) goto code_r0x03689760;
                            if (piVar2 != (int *)0x0) {
                              iVar1 = *piVar2;
                              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                              if (uVar6 != 0) {
                                piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                                do {
                                  if (piVar14[-1] == **(int **)(iRam03689948 + 0x3689794)) {
                                    puVar8 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
                                    goto LAB_036897dc;
                                  }
                                  uVar6 = uVar6 - 1;
                                  piVar14 = piVar14 + 2;
                                } while (uVar6 != 0);
                              }
                              puVar8 = (undefined4 *)
                                       func_0x024f8424(piVar2,**(int **)(iRam03689948 + 0x3689794),0
                                                      );
LAB_036897dc:
                              (*(code *)*puVar8)(piVar2,puVar8[1]);
                            }
                            piVar14 = (int *)0x0;
                            if (extraout_r1 != 1) {
                              if (*(int *)((int)puVar5 + -0x60) == 0) goto LAB_036898b4;
                              iVar1 = **(int **)((int)puVar5 + -0x60);
                              uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
                              if (uVar6 == 0) goto LAB_03689884;
                              piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                              goto LAB_0368986c;
                            }
                            puVar8 = (undefined4 *)func_0x024f86ec(uVar19);
                            piVar2 = (int *)*puVar8;
                            func_0x024f86fc();
                          } while( true );
                        }
                        iVar17 = *(int *)(iVar20 + 0x1c);
                        piVar2 = *(int **)(iVar1 + 0x28);
                      }
                      else {
                        iVar17 = *(int *)(iVar20 + 0x1c);
                        piVar2 = *(int **)(iVar1 + 0x24);
                      }
                    }
                    else {
                      iVar17 = *(int *)(iVar20 + 0x1c);
                      piVar2 = *(int **)(iVar1 + 0x20);
                    }
                  }
                  else {
                    iVar17 = *(int *)(iVar20 + 0x1c);
                    piVar2 = *(int **)(iVar1 + 0x1c);
                  }
                }
                else {
                  iVar17 = *(int *)(iVar20 + 0x1c);
                  piVar2 = *(int **)(iVar1 + 0x18);
                }
              }
              else {
                iVar17 = *(int *)(iVar20 + 0x1c);
                piVar2 = *(int **)(iVar1 + 0x14);
              }
              iVar1 = *(int *)(iVar17 + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x024f83fc(iVar1);
              }
              piVar14 = (int *)0x0;
              if (piVar2 != (int *)0x0) {
                if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
                   (piVar14 = piVar2,
                   *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) !=
                   iVar1)) {
                  piVar14 = (int *)0x0;
                }
              }
              return piVar14;
            }
            iVar17 = *(int *)(iVar17 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x28);
          }
          else {
            iVar17 = *(int *)(iVar17 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x24);
          }
        }
        else {
          iVar17 = *(int *)(iVar17 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x20);
        }
      }
      else {
        iVar17 = *(int *)(iVar17 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
      }
    }
    else {
      iVar17 = *(int *)(iVar17 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x18);
    }
  }
  else {
    iVar17 = *(int *)(iVar17 + 0x1c);
    piVar2 = *(int **)(iVar1 + 0x14);
  }
  iVar1 = *(int *)(iVar17 + 4);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x024f83fc(iVar1);
  }
  piVar14 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
       (piVar14 = piVar2,
       *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1)) {
      piVar14 = (int *)0x0;
    }
  }
  return piVar14;
code_r0x03689760:
  piVar14 = (int *)func_0x024f86ec(uVar19);
  iVar1 = *piVar14;
  piVar14 = (int *)0x0;
  func_0x024f86fc();
  goto LAB_03689548;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar2 = piVar2 + 2;
    if (uVar6 == 0) break;
LAB_0368986c:
    if (piVar2[-1] == **(int **)(iRam03689954 + 0x3689858)) {
      puVar8 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
      goto LAB_036898a0;
    }
  }
LAB_03689884:
  puVar8 = (undefined4 *)
           func_0x024f8424(*(undefined4 *)((int)puVar5 + -0x60),**(int **)(iRam03689954 + 0x3689858)
                           ,0);
LAB_036898a0:
  (*(code *)*puVar8)(*(undefined4 *)((int)puVar5 + -0x60),puVar8[1]);
LAB_036898b4:
  bVar33 = 1;
  uVar29 = 1;
  func_0x024f842c(uVar19);
  uVar35 = func_0x024f7a70();
  iVar1 = (int)((ulonglong)uVar35 >> 0x20);
  bVar30 = false;
  bVar32 = bVar33;
  if ((bool)uVar29) {
    bVar32 = (undefined1 *)0xffff0fff < puVar7 || CARRY4((uint)(puVar7 + 0xf000),(uint)bVar33);
    puVar25 = puVar7 + bVar33 + 0xf000;
    puVar7 = puVar7 + bVar33 + 0xf000;
    bVar30 = puVar25 == (undefined1 *)0x0;
  }
  bVar33 = bVar32;
  if (bVar30) {
    bVar33 = (undefined1 *)0xdffffffe < puVar7 || CARRY4((uint)(puVar7 + 0x20000001),(uint)bVar32);
  }
  bVar31 = false;
  bVar34 = bVar33;
  if (bVar30 && puVar7 + bVar32 + 0x20000001 == (undefined1 *)0x0) {
    bVar34 = (undefined1 *)0xfffffdff < puVar7 || CARRY4((uint)(puVar7 + 0x200),(uint)bVar33);
    puVar27 = puVar7 + bVar33 + 0x200;
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar32 = bVar34;
  if (bVar31) {
    bVar32 = (undefined1 *)0xfffffdff < puVar7 || CARRY4((uint)(puVar7 + 0x200),(uint)bVar34);
    puVar27 = puVar7 + bVar34 + 0x200;
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar31 = false;
  bVar33 = bVar32;
  if (bVar30) {
    bVar33 = (undefined1 *)0xfffffdaf < puVar7 || CARRY4((uint)(puVar7 + 0x250),(uint)bVar32);
    puVar27 = puVar7 + bVar32 + 0x250;
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar32 = bVar33;
  if (bVar31) {
    bVar32 = (undefined1 *)0xfffff6bf < puVar7 || CARRY4((uint)(puVar7 + 0x940),(uint)bVar33);
    puVar27 = puVar7 + bVar33 + 0x940;
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar33 = bVar32;
  if (bVar30) {
    bVar33 = (undefined1 *)0xffffffcc < puVar7 || CARRY4((uint)(puVar7 + 0x33),(uint)bVar32);
  }
  bVar31 = false;
  bVar34 = bVar33;
  if (bVar30 && puVar7 + bVar32 + 0x33 == (undefined1 *)0x0) {
    bVar34 = (undefined1 *)0xffffc1ff < puVar7 || CARRY4((uint)(puVar7 + 0x3e00),(uint)bVar33);
    puVar27 = puVar7 + bVar33 + 0x3e00;
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar32 = bVar34;
  if (bVar31) {
    bVar32 = (undefined1 *)0xfffffff3 < puVar7 || CARRY4((uint)(puVar7 + 0xc),(uint)bVar34);
  }
  bVar30 = false;
  bVar33 = bVar32;
  if (bVar31 && puVar7 + bVar34 + 0xc == (undefined1 *)0x0) {
    bVar33 = (undefined1 *)0xffff7fff < puVar7 || CARRY4((uint)(puVar7 + 0x8000),(uint)bVar32);
    puVar27 = puVar7 + bVar32 + 0x8000;
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar31 = false;
  bVar32 = bVar33;
  if (bVar30) {
    bVar32 = (undefined1 *)0xfffffd0f < puVar7 || CARRY4((uint)(puVar7 + 0x2f0),(uint)bVar33);
    puVar27 = puVar7 + bVar33 + 0x2f0;
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar32;
  if (bVar31) {
    bVar33 = (undefined1 *)0xfffc6fff < puVar7 || CARRY4((uint)(puVar7 + 0x39000),(uint)bVar32);
    puVar27 = puVar7 + (int)("_ZNSt6__ndk16localeC2ERKS0_PKci" + bVar32 + 0x15);
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar31 = false;
  bVar32 = bVar33;
  if (bVar30) {
    bVar32 = (undefined1 *)0xffff7fff < puVar7 || CARRY4((uint)(puVar7 + 0x8000),(uint)bVar33);
    puVar27 = puVar7 + bVar33 + 0x8000;
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar32;
  if (bVar31) {
    bVar33 = (undefined1 *)0xffc9ffff < puVar7 || CARRY4((uint)(puVar7 + 0x360000),(uint)bVar32);
    puVar27 = puVar7 + bVar32 + 0x360000;
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar31 = false;
  bVar32 = bVar33;
  if (bVar30) {
    bVar32 = (undefined1 *)0xfffff7ff < puVar7 || CARRY4((uint)(puVar7 + 0x800),(uint)bVar33);
    puVar27 = puVar7 + bVar33 + 0x800;
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar32;
  if (bVar31) {
    bVar33 = (undefined1 *)0xffff5fff < puVar7 || CARRY4((uint)(puVar7 + 0xa000),(uint)bVar32);
    puVar27 = puVar7 + bVar32 + 0xa000;
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar31 = false;
  bVar32 = bVar33;
  if (bVar30) {
    bVar32 = (undefined1 *)0xfc4fffff < puVar7 || CARRY4((uint)(puVar7 + 0x3b00000),(uint)bVar33);
    puVar27 = puVar7 + (int)(&UNK_03b00000 + bVar33);
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar32;
  if (bVar31) {
    bVar33 = (undefined1 *)0xfff6ffff < puVar7 || CARRY4((uint)(puVar7 + 0x90000),(uint)bVar32);
    puVar27 = puVar7 + bVar32 + 0x90000;
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar31 = false;
  bVar32 = bVar33;
  if (bVar30) {
    bVar32 = (undefined1 *)0xf0ffffff < puVar7 || CARRY4((uint)(puVar7 + 0xf000000),(uint)bVar33);
    puVar27 = puVar7 + bVar33 + 0xf000000;
    bVar31 = puVar27 == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar32;
  if (bVar31) {
    bVar33 = (undefined1 *)0xff67ffff < puVar7 || CARRY4((uint)(puVar7 + 0x980000),(uint)bVar32);
    puVar27 = puVar7 + (int)(&UNK_00980000 + bVar32);
    bVar30 = puVar27 == (undefined1 *)0x0;
  }
  bVar31 = false;
  bVar32 = bVar33;
  if (bVar30) {
    bVar32 = (undefined1 *)0xefffffff < puVar7 || CARRY4((uint)(puVar7 + 0x10000000),(uint)bVar33);
    puVar26 = puVar7 + bVar33 + 0x10000000;
    puVar7 = puVar7 + bVar33 + 0x10000000;
    bVar31 = puVar26 == (undefined1 *)0x0;
  }
  if (bVar31) {
    puVar27 = puVar7 + (int)(&UNK_02c00000 + bVar32);
  }
  *(undefined4 *)(puVar7 + -4) = 0x36898d0;
  *(undefined1 **)(puVar7 + -8) = puVar27;
  *(undefined4 *)(puVar7 + -0xc) = 0;
  *(undefined4 *)(puVar7 + -0x10) = uVar19;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(_UNK_03689a0c + 0x368997c));
    func_0x024f83cc(*(undefined4 *)(_UNK_03689a10 + 0x3689988));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x024f83f8(iVar1);
    }
  }
  if (*(int *)(**(int **)(_UNK_03689a14 + 0x36899a8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar17 = func_0x024f93f8((int)uVar35,0);
  uVar19 = **(undefined4 **)(iVar1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_03689a18 + 0x36899d8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar1 = func_0x05171434(uVar19,0);
  return (int *)(uint)(iVar17 == iVar1);
}

