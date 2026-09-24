/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBItemUsageAds$$OnBtnClick RVA 0x22922cc =====

/* WARNING: Possible PIC construction at 0x02446b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02446b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_022a22cc(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  char *pcVar8;
  undefined4 uVar9;
  int unaff_r6;
  int *piVar10;
  undefined4 unaff_r7;
  int iVar11;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
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
  
  pcVar8 = (char *)(_UNK_022a253c + 0x22a22e0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a2540 + 0x22a22f4));
    func_0x01384978(*(undefined4 *)(_UNK_022a2544 + 0x22a2300));
    func_0x01384978(*(undefined4 *)(_UNK_022a2548 + 0x22a230c));
    func_0x01384978(*(undefined4 *)(_UNK_022a254c + 0x22a2318));
    func_0x01384978(*(undefined4 *)(_UNK_022a2550 + 0x22a2324));
    func_0x01384978(*(undefined4 *)(_UNK_022a2554 + 0x22a2330));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb53d);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb53d);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    uVar2 = func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
    return uVar2;
  }
  iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_022a2558 + 0x22a2380));
  func_0x0244f5a0(iVar3,0);
  if (*(int *)(**(int **)(_UNK_022a255c + 0x22a239c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = func_0x01ddc02c(0);
  if (iVar7 != 0) {
    func_0x022a2578(param_1);
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    piVar10 = (int *)(iVar3 + 8);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x02feb690(iVar7,piVar10,0,**(undefined4 **)(_UNK_022a2560 + 0x22a23f8));
    if (iVar7 != 0) {
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar10;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = FUN_0211e720(iVar7,0);
      if (iVar7 != 0) {
        iVar7 = *piVar10;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        FUN_0211e7e0(iVar7,0);
        iVar7 = func_0x01c24918(0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0xc);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 8);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        piVar10 = *(int **)(_UNK_022a2564 + 0x22a2498);
        uVar9 = *(undefined4 *)(iVar7 + 0x1a8);
        *(undefined4 *)(iVar3 + 0xc) = uVar9;
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01993868(uVar9,0);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
        iVar7 = func_0x01c24918(0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar3 + 0xc);
        iVar7 = *(int *)(iVar7 + 0xa0);
        uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_022a2568 + 0x22a24e8));
        func_0x03cc8878(uVar9,iVar3,**(undefined4 **)(_UNK_022a256c + 0x22a250c),0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        pcVar8 = (char *)(_UNK_02bb8144 + 0x2bb7f54);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bb8148 + 0x2bb7f68),uVar6,uVar9,0);
          func_0x01384978(*(undefined4 *)(_UNK_02bb814c + 0x2bb7f74));
          *pcVar8 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x3529,0);
        if (iVar3 == 0) {
          *(undefined4 *)(iVar7 + 0x14) = 0;
          iVar3 = func_0x02bb74a4(iVar7,uVar6);
          uVar2 = 0;
          if (iVar3 != 0) {
            iVar4 = func_0x02bb7da0();
            uVar2 = 0;
            if (iVar4 != 0) {
              iVar4 = func_0x02bb7e04(iVar7,uVar6);
              if (iVar4 != 0) {
                pcVar8 = (char *)(_UNK_02bb8580 + 0x2bb8178);
                if (*pcVar8 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_02bb8584 + 0x2bb818c));
                  func_0x01384978(*(undefined4 *)(_UNK_02bb8588 + 0x2bb8198));
                  func_0x01384978(*(undefined4 *)(_UNK_02bb858c + 0x2bb81a4));
                  func_0x01384978(*(undefined4 *)(_UNK_02bb8590 + 0x2bb81b0));
                  func_0x01384978(*(undefined4 *)(_UNK_02bb8594 + 0x2bb81bc));
                  func_0x01384978(*(undefined4 *)(_UNK_02bb8598 + 0x2bb81c8));
                  func_0x01384978(*(undefined4 *)(_UNK_02bb859c + 0x2bb81d4));
                  func_0x01384978(*(undefined4 *)(_UNK_02bb85a0 + 0x2bb81e0));
                  *pcVar8 = '\x01';
                }
                iVar4 = func_0x0229f06c(0x352b,0);
                if (iVar4 == 0) {
                  iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02bb85a4 + 0x2bb8244));
                  func_0x04874ed4(iVar4,0);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  uVar2 = (uint)*(byte *)(iVar7 + 0x10);
                  *(undefined4 *)(iVar4 + 0x18) = uVar9;
                  *(int *)(iVar4 + 0x14) = iVar3;
                  *(int *)(iVar4 + 8) = iVar7;
                  if (uVar2 == 0) {
                    iVar3 = func_0x02bbae54(iVar7);
                    if (iVar3 != 0) {
                      iVar11 = *(int *)(iVar4 + 0x14);
                      uVar9 = *(undefined4 *)(iVar3 + 0xc);
                      *(undefined1 *)(iVar7 + 0x10) = 1;
                      *(undefined4 *)(iVar4 + 0xc) = uVar9;
                      if (iVar11 == 0) {
                        func_0x01384bf0();
                        uVar9 = *(undefined4 *)(iVar4 + 0xc);
                      }
                      *(undefined4 *)(iVar7 + 0x14) = uVar9;
                      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar11 + 0xc);
                      iVar7 = func_0x02bb8f64(iVar7);
                      uVar9 = *(undefined4 *)(iVar3 + 0x18);
                      if (iVar7 == 0) {
                        func_0x01384bf0();
                      }
                      iVar7 = func_0x02bbbc2c(iVar7,uVar9);
                      if (iVar7 == 0) {
                        iVar7 = *(int *)(iVar3 + 0x18);
                      }
                      uVar6 = *(undefined4 *)(iVar4 + 0xc);
                      uVar9 = *(undefined4 *)(iVar4 + 0x10);
                      if (*(int *)(**(int **)(_UNK_02bb85ac + 0x2bb8304) + 0x74) == 0) {
                        func_0x01384ab4();
                      }
                      func_0x0199474c(uVar9,uVar6,0);
                      iVar11 = func_0x01c24918(0);
                      if (iVar11 == 0) {
                        func_0x01384bf0();
                      }
                      iVar11 = *(int *)(iVar11 + 8);
                      if (iVar11 == 0) {
                        func_0x01384bf0();
                      }
                      func_0x01bfd948(iVar11,0);
                      iVar11 = func_0x034aaa34(**(undefined4 **)(_UNK_02bb85b0 + 0x2bb836c));
                      piVar10 = *(int **)(_UNK_02bb85b4 + 0x2bb8380);
                      iVar5 = *piVar10;
                      if (*(int *)(iVar5 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar5 = *piVar10;
                      }
                      uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x134);
                      piVar10 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bb85b8 + 0x2bb83a4),
                                                       4);
                      if (piVar10 == (int *)0x0) {
                        func_0x01384bf0();
                      }
                      iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar10 + 0x20));
                      if (iVar5 == 0) {
                        uVar6 = func_0x01384c10();
                        func_0x01384aa0(uVar6,0);
                      }
                      if (piVar10[3] == 0) {
                        func_0x01384bf4();
                      }
                      piVar10[4] = iVar3;
                      iVar3 = *(int *)(iVar4 + 0x10);
                      if ((iVar3 != 0) &&
                         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar10 + 0x20)),
                         iVar5 == 0)) {
                        uVar6 = func_0x01384c10();
                        func_0x01384aa0(uVar6,0);
                      }
                      if ((uint)piVar10[3] < 2) {
                        func_0x01384bf4();
                      }
                      piVar10[5] = iVar3;
                      if ((iVar7 != 0) &&
                         (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)),
                         iVar3 == 0)) {
                        uVar6 = func_0x01384c10();
                        func_0x01384aa0(uVar6,0);
                      }
                      if ((uint)piVar10[3] < 3) {
                        func_0x01384bf4();
                      }
                      piVar10[6] = iVar7;
                      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02bb85bc + 0x2bb8488));
                      func_0x03cc9024(iVar3,iVar4,**(undefined4 **)(_UNK_02bb85c0 + 0x2bb84a4),0);
                      if ((iVar3 != 0) &&
                         (iVar7 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar10 + 0x20)),
                         iVar7 == 0)) {
                        uVar6 = func_0x01384c10();
                        func_0x01384aa0(uVar6,0);
                      }
                      if ((uint)piVar10[3] < 4) {
                        func_0x01384bf4();
                      }
                      piVar10[7] = iVar3;
                      if (iVar11 == 0) {
                        func_0x01384bf0();
                      }
                      iVar3 = func_0x0229f06c(0xd,0,piVar10,0);
                      if (iVar3 == 0) {
                        uVar2 = func_0x01ee81d4(iVar11,uVar9,0,piVar10);
                      }
                      else {
                        iVar3 = func_0x0229f13c(0xd,0);
                        if (iVar3 == 0) {
                          func_0x01384bf0();
                        }
                        uStack_20 = 0;
                        uVar2 = func_0x02174858(iVar3,iVar11,uVar9,piVar10);
                      }
                      return uVar2;
                    }
                    iVar3 = *(int *)(iVar4 + 0x18);
                    uVar2 = 0;
                    if (iVar3 != 0) {
                      iVar7 = *(int *)(iVar4 + 0x14);
                      if (iVar7 == 0) {
                        func_0x01384bf0();
                      }
                      piVar10 = *(int **)(_UNK_02bb85a8 + 0x2bb853c);
                      uVar9 = *(undefined4 *)(iVar7 + 8);
                      iVar7 = *piVar10;
                      if (*(int *)(iVar7 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar7 = *piVar10;
                      }
                      uStack_24 = *(undefined4 *)(iVar3 + 0x14);
                      uStack_28 = 0;
                      uVar2 = (**(code **)(iVar3 + 0xc))
                                        (*(undefined4 *)(iVar3 + 0x20),uVar9,0,
                                         *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x7c));
                    }
                  }
                }
                else {
                  iVar4 = func_0x0229f13c(0x352b,0);
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  uStack_28 = 0;
                  uVar2 = func_0x02174858(iVar4,iVar7,iVar3,uVar9);
                }
                return uVar2;
              }
              iVar4 = func_0x02bb5f10(iVar7);
              if ((iVar4 != 0) && (iVar4 = func_0x02bb5ff4(iVar7), iVar4 != 0)) {
                iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_02bb8154 + 0x2bb8058));
                uVar9 = func_0x02bb85c4(iVar7,iVar3,uVar9);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x0229f06c(0xe78,0,0);
                if (iVar3 == 0) {
                  iVar4 = *(int *)(iVar4 + 8);
                  pcVar8 = (char *)(_UNK_02446b9c + 0x2446ae4);
                  if (*pcVar8 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_02446ba0 + 0x2446af8),uVar9,0);
                    *pcVar8 = '\x01';
                  }
                  iVar3 = func_0x0229f06c(0xbd5,0);
                  if (iVar3 == 0) {
                    iVar3 = func_0x02f2d3f8(&stack0xffffffec,uVar9,
                                            **(undefined4 **)(_UNK_02446ba4 + 0x2446b60));
                    if (iVar3 != 0) {
                      if (iVar4 == 0) {
                        func_0x01384bf0();
                      }
                      func_0x02450640(iVar4,iVar3,0);
                    }
                    return 0;
                  }
                  iVar3 = func_0x0229f13c(0xbd5,0);
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                  unaff_lr = 0x2446b4c;
                  unaff_r4 = iVar4;
                  unaff_r5 = uVar9;
                  unaff_r6 = iVar3;
                  register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
                }
                else {
                  iVar3 = func_0x0229f13c(0xe78,0);
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                }
                *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
                *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
                *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
                *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
                *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
                *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
                *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
                *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
                pcVar8 = (char *)(_UNK_021ab528 + 0x21ab434);
                if (*pcVar8 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_021ab52c + 0x21ab448),iVar4,uVar9,0);
                  *pcVar8 = '\x01';
                }
                *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x34) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                *(undefined4 *)((int)register0x00000054 + -0x30) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                *(undefined4 *)((int)register0x00000054 + -0x2c) =
                     *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
                func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
                iVar7 = *(int *)(iVar3 + 0x10);
                *(undefined4 *)((int)register0x00000054 + -0x38) =
                     *(undefined4 *)((int)register0x00000054 + -0x50);
                *(undefined4 *)((int)register0x00000054 + -0x34) =
                     *(undefined4 *)((int)register0x00000054 + -0x4c);
                *(undefined4 *)((int)register0x00000054 + -0x30) =
                     *(undefined4 *)((int)register0x00000054 + -0x48);
                *(undefined4 *)((int)register0x00000054 + -0x2c) =
                     *(undefined4 *)((int)register0x00000054 + -0x44);
                *(undefined4 *)((int)register0x00000054 + -0x28) =
                     *(undefined4 *)((int)register0x00000054 + -0x40);
                if (iVar7 != 0) {
                  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
                }
                func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
                func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),uVar9,0);
                iVar7 = *(int *)(iVar3 + 8);
                uVar9 = *(undefined4 *)(iVar3 + 0xc);
                iVar3 = *(int *)(iVar3 + 0x10);
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                uVar6 = 3;
                if (iVar3 == 0) {
                  uVar6 = 2;
                }
                *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
                func_0x0245495c(iVar7,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
                uVar2 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                                        **(undefined4 **)(_UNK_021ab530 + 0x21ab518));
                return uVar2;
              }
              iVar3 = func_0x01c24918(0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar7 = *(int *)(iVar3 + 0x10);
              iVar4 = **(int **)(_UNK_02bb8150 + 0x2bb80bc);
              iVar3 = *(int *)(iVar4 + 0x1c);
              if (iVar3 == 0) {
                func_0x0140024c(iVar4);
                iVar3 = *(int *)(iVar4 + 0x1c);
              }
              iVar3 = *(int *)(iVar3 + 8);
              if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = func_0x014001f0();
              }
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
              if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = func_0x014001f0();
              }
              uVar9 = **(undefined4 **)(iVar3 + 0x5c);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              pcVar8 = (char *)(_UNK_01ca1d48 + 0x1ca1c70);
              if (*pcVar8 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01ca1d4c + 0x1ca1c84),0x11,uVar9,0);
                *pcVar8 = '\x01';
              }
              iVar3 = func_0x0229f06c(8,0);
              if (iVar3 == 0) {
                pcVar8 = (char *)(_UNK_01ca1d50 + 0x1ca1ce8);
                if (*pcVar8 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01ca1d54 + 0x1ca1cfc));
                  *pcVar8 = '\x01';
                }
                puVar1 = *(undefined4 **)(**(int **)(_UNK_01ca1d58 + 0x1ca1d10) + 0x5c);
                uStack_28 = puVar1[1];
                uStack_24 = puVar1[2];
                uStack_20 = uVar9;
                uVar2 = func_0x01ca1848(iVar7,0x11,**(undefined4 **)(_UNK_01ca1d5c + 0x1ca1d20),
                                        *puVar1);
              }
              else {
                iVar3 = func_0x0229f13c(8,0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                uStack_28 = 0;
                uVar2 = func_0x02175bd0(iVar3,iVar7,0x11,uVar9);
              }
              return uVar2;
            }
          }
        }
        else {
          iVar3 = func_0x0229f13c(0x3529,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = 0;
          uVar2 = func_0x0217ab90(iVar3,iVar7,uVar6,uVar9);
        }
        return uVar2;
      }
    }
  }
  return 0;
}



// ===== FAT.Merge.MBItemUsageAds.<>c__DisplayClass0_0$$.ctor RVA 0x2292570 =====

void FUN_022a2570(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageAds$$Refresh RVA 0x22925bc =====

/* WARNING: Possible PIC construction at 0x0199375c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01993760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a25bc(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_r5;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int unaff_r6;
  undefined4 uVar11;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 unaff_lr;
  undefined4 *puVar14;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar8 = (char *)(_UNK_022a2698 + 0x22a25d0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a269c + 0x22a25e4));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb540);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb540);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  func_0x022a26a4(param_1);
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar3 + 0x1a8);
  if (*(int *)(**(int **)(_UNK_022a26a0 + 0x22a2674) + 0x74) == 0) {
    func_0x01384ab4();
  }
  puVar12 = &uStack_28;
  pcVar8 = (char *)(_UNK_01993768 + 0x1993584);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0199376c + 0x1993598),0);
    func_0x01384978(*(undefined4 *)(_UNK_01993770 + 0x19935a4));
    func_0x01384978(*(undefined4 *)(_UNK_01993774 + 0x19935b0));
    func_0x01384978(*(undefined4 *)(_UNK_01993778 + 0x19935bc));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x84d,0);
  if (iVar3 == 0) {
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xa0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x02bb7e88(iVar3,uVar10,0);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xa0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 0;
    iVar3 = func_0x02bb7e04(iVar3,uVar10,0);
    if (iVar3 == 0) {
      uStack_1c = 0;
      uStack_24 = **(undefined4 **)(_UNK_01993784 + 0x19936f4);
      uStack_20 = 0xffffffff;
      uVar10 = func_0x0244f5f4(&uStack_24,0);
      if (*(int *)(**(int **)(_UNK_01993788 + 0x1993718) + 0x74) == 0) {
        func_0x01384ab4();
      }
      unaff_r6 = func_0x02f74dec(**(undefined4 **)(_UNK_0199378c + 0x1993734));
      if (unaff_r6 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x019937f0(unaff_r6,uVar10,uVar5);
      unaff_lr = 0x1993760;
    }
    else {
      if (*(int *)(**(int **)(_UNK_0199377c + 0x1993698) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x02f74dec(**(undefined4 **)(_UNK_01993780 + 0x19936b4));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x01993790(iVar3,uVar5);
      uVar10 = uStack_18;
      uVar5 = uStack_14;
      uVar11 = unaff_r7;
      puVar12 = (undefined4 *)register0x00000054;
    }
    *(undefined4 *)((int)puVar12 + -4) = unaff_lr;
    *(int *)((int)puVar12 + -8) = unaff_r6;
    *(undefined4 *)((int)puVar12 + -0xc) = uVar5;
    puVar14 = (undefined4 *)((int)puVar12 + -0x10);
    *puVar14 = uVar10;
    pcVar8 = (char *)(_UNK_01993228 + 0x19930f0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0199322c + 0x1993104));
      func_0x01384978(*(undefined4 *)(_UNK_01993230 + 0x1993110));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x27,0);
    if (iVar3 == 0) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar3 = *piVar2;
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01993234 + 0x1993174) + 0xb8);
      if ((uVar4 <= *(byte *)(iVar3 + 0xb8)) &&
         (*(int *)(*(int *)(iVar3 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01993234 + 0x1993174))
         ) {
        (**(code **)(iVar3 + 0xe0))(piVar2,*(undefined4 *)(iVar3 + 0xe4));
      }
      piVar1 = (int *)func_0x02450044(piVar2,0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)(**(code **)(*piVar1 + 0x100))(piVar1,*(undefined4 *)(*piVar1 + 0x104));
      uVar10 = func_0x02450054(piVar2,0);
      if (*(int *)(**(int **)(_UNK_01993238 + 0x1993204) + 0x74) == 0) {
        func_0x01384ab4();
      }
      *(undefined4 *)((int)puVar12 + -4) = *(undefined4 *)((int)puVar12 + -4);
      *(undefined4 *)((int)puVar12 + -8) = *(undefined4 *)((int)puVar12 + -8);
      *(undefined4 *)((int)puVar12 + -0xc) = *(undefined4 *)((int)puVar12 + -0xc);
      *puVar14 = *puVar14;
      pcVar8 = (char *)(_UNK_01998f20 + 0x1998e0c);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01998f24 + 0x1998e20));
        func_0x01384978(*(undefined4 *)(_UNK_01998f28 + 0x1998e2c));
        func_0x01384978(*(undefined4 *)(_UNK_01998f2c + 0x1998e38));
        *pcVar8 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x2a,0);
      if (iVar3 == 0) {
        iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01998f30 + 0x1998e94));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar3 + 9) != '\0') {
          piVar2 = *(int **)(_UNK_01998f34 + 0x1998ec0);
          iVar3 = *piVar2;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar2;
          }
          if (*(char *)(*(int *)(iVar3 + 0x5c) + 0xc) != '\0') {
            iVar3 = **(int **)(**(int **)(_UNK_01998f38 + 0x1998ef0) + 0x5c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar5 = *puVar14;
            uVar6 = *(undefined4 *)((int)puVar12 + -0xc);
            uVar9 = *(undefined4 *)((int)puVar12 + -8);
            *(undefined4 *)((int)puVar12 + -4) = *(undefined4 *)((int)puVar12 + -4);
            *(undefined4 *)((int)puVar12 + -8) = unaff_r8;
            *(undefined4 *)((int)puVar12 + -0xc) = uVar11;
            *puVar14 = uVar9;
            *(undefined4 *)((int)puVar12 + -0x14) = uVar6;
            *(undefined4 *)((int)puVar12 + -0x18) = uVar5;
            iVar7 = func_0x0229f06c(0x2b,0,uVar10,0);
            if (iVar7 == 0) {
              iVar7 = func_0x020a3acc(iVar3,0,piVar1,uVar10);
              if (iVar7 == 0) {
                piVar2 = *(int **)(iVar3 + 0x24);
                if (piVar2 == (int *)0x0) {
                  func_0x01384bf0();
                }
                    /* WARNING: Could not recover jumptable at 0x020a3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*piVar2 + 0x1e8))
                          (piVar2,piVar1,uVar10,*(undefined4 *)(*piVar2 + 0x1ec));
                return;
              }
            }
            else {
              iVar7 = func_0x0229f13c(0x2b,0);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              *(undefined4 *)((int)puVar12 + -0x20) = 0;
              func_0x02174858(iVar7,iVar3,piVar1,uVar10);
            }
            return;
          }
        }
        return;
      }
      iVar3 = func_0x0229f13c(0x2a,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *puVar14;
      uVar6 = *(undefined4 *)((int)puVar12 + -0xc);
      uVar9 = *(undefined4 *)((int)puVar12 + -8);
      uVar13 = *(undefined4 *)((int)puVar12 + -4);
    }
    else {
      iVar3 = func_0x0229f13c(0x27,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar10 = 0;
      uVar5 = *puVar14;
      uVar6 = *(undefined4 *)((int)puVar12 + -0xc);
      uVar9 = *(undefined4 *)((int)puVar12 + -8);
      uVar13 = *(undefined4 *)((int)puVar12 + -4);
      piVar1 = piVar2;
    }
    *(undefined4 *)((int)puVar12 + -4) = uVar13;
    *(undefined4 *)((int)puVar12 + -8) = unaff_r10;
    *(undefined4 *)((int)puVar12 + -0xc) = unaff_r9;
    *puVar14 = unaff_r8;
    *(undefined4 *)((int)puVar12 + -0x14) = uVar11;
    *(undefined4 *)((int)puVar12 + -0x18) = uVar9;
    *(undefined4 *)((int)puVar12 + -0x1c) = uVar6;
    *(undefined4 *)((int)puVar12 + -0x20) = uVar5;
    *(undefined4 *)((int)puVar12 + -0x38) = 0;
    *(undefined4 *)((int)puVar12 + -0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)puVar12 + -0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)puVar12 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)puVar12 + -0x28) = 0;
    func_0x0245494c((undefined4 *)((int)puVar12 + -0x50),0,uVar10,0);
    iVar7 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)((int)puVar12 + -0x38) = *(undefined4 *)((int)puVar12 + -0x50);
    *(undefined4 *)((int)puVar12 + -0x34) = *(undefined4 *)((int)puVar12 + -0x4c);
    *(undefined4 *)((int)puVar12 + -0x30) = *(undefined4 *)((int)puVar12 + -0x48);
    *(undefined4 *)((int)puVar12 + -0x2c) = *(undefined4 *)((int)puVar12 + -0x44);
    *(undefined4 *)((int)puVar12 + -0x28) = *(undefined4 *)((int)puVar12 + -0x40);
    if (iVar7 != 0) {
      func_0x01485278((undefined1 *)((int)puVar12 + -0x38),iVar7,0);
    }
    func_0x01485278((undefined1 *)((int)puVar12 + -0x38),piVar1,0);
    func_0x01485278((undefined1 *)((int)puVar12 + -0x38),uVar10,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    *(undefined4 *)((int)puVar12 + -0x58) = 0;
    *(undefined4 *)((int)puVar12 + -0x54) = 0;
    func_0x0245495c(iVar7,uVar10,(undefined1 *)((int)puVar12 + -0x38),uVar5);
    return;
  }
  iVar3 = func_0x0229f13c(0x84d,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485238(&uStack_30,uVar10,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar3 == 0) {
    uVar5 = 1;
  }
  func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5,0,0);
  return;
}



// ===== FAT.Merge.MBItemUsageAds$$.ctor RVA 0x22926e8 =====

void FUN_022a26e8(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageAds$$<>iFixBaseProxy_OnBtnClick RVA 0x22926f8 =====

void thunk_FUN_022a2578(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x7760);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x7760);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.Merge.MBItemUsageAds$$<>iFixBaseProxy_Refresh RVA 0x22926fc =====

void thunk_FUN_022a26a4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0xa504);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa504);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.Merge.MBItemUsageAds.<>c__DisplayClass0_0$$<OnBtnClick>b__0 RVA 0x2292700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a2700(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [2];
  
  pcVar8 = (char *)(_UNK_022a27d4 + 0x22a2720);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a27d8 + 0x22a2738));
    *pcVar8 = '\x01';
  }
  param_3 = param_3 & 1;
  if (param_3 != 0) {
    uVar11 = *(undefined4 *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0210e2d4(*(int *)(param_1 + 0x10),0);
    }
    if (*(int *)(**(int **)(_UNK_022a27dc + 0x22a277c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    aiStack_28[0] = 0;
    func_0x01993e60(uVar11,1,uVar7,param_5 & 1);
  }
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_0211f03c + 0x211e940);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211f040 + 0x211e954),param_3,param_4,0);
    func_0x01384978(*(undefined4 *)(_UNK_0211f044 + 0x211e960));
    func_0x01384978(*(undefined4 *)(_UNK_0211f048 + 0x211e96c));
    func_0x01384978(*(undefined4 *)(_UNK_0211f04c + 0x211e978));
    func_0x01384978(*(undefined4 *)(_UNK_0211f050 + 0x211e984));
    func_0x01384978(*(undefined4 *)(_UNK_0211f054 + 0x211e990));
    func_0x01384978(*(undefined4 *)(_UNK_0211f058 + 0x211e99c));
    func_0x01384978(*(undefined4 *)(_UNK_0211f05c + 0x211e9a8));
    func_0x01384978(*(undefined4 *)(_UNK_0211f060 + 0x211e9b4));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar3 = func_0x0229f06c(0xb379,0);
  if (iVar3 == 0) {
    *(undefined1 *)(iVar9 + 0x24) = 0;
    if (param_3 != 0) {
      bVar1 = false;
      iVar3 = FUN_02123568(iVar9,0);
      iVar12 = 0;
      if (iVar3 != 0) {
        bVar1 = false;
        iVar4 = func_0x02feb690(iVar3,aiStack_28,0,**(undefined4 **)(_UNK_0211f064 + 0x211ea58));
        iVar5 = aiStack_28[0];
        iVar12 = 0;
        if ((iVar4 != 0) && (iVar12 = 0, aiStack_28[0] == iVar9)) {
          if (aiStack_28[0] == 0) {
            func_0x01384bf0();
          }
          iVar12 = FUN_0211e720(iVar5);
        }
        iVar5 = FUN_0210cd28(iVar3);
        if (iVar5 != 0) {
          iVar4 = 0;
          iVar5 = func_0x01c24918(0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar5 + 0x4c) != 0) {
            iVar4 = 0;
            iVar5 = func_0x01dbb000(*(int *)(iVar5 + 0x4c),0);
            if (iVar5 != 0) {
              iVar4 = FUN_02139cf4(iVar5,0);
            }
          }
          iVar5 = FUN_0210cd28(iVar3);
          bVar1 = iVar4 == iVar5;
        }
        iVar5 = FUN_02116a8c(iVar3);
        if (((iVar5 == 0) && (iVar5 = FUN_0210cd28(iVar3), bVar1 && iVar12 != 0)) && (iVar5 != 0)) {
          iVar9 = FUN_0210cd28(iVar3);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          FUN_020e79c0(iVar9,iVar3,0);
          uVar11 = FUN_0210e2d4(iVar3);
          uVar11 = FUN_02157e88(uVar11,0);
          piVar6 = *(int **)(_UNK_0211f080 + 0x211efd0);
          iVar9 = *piVar6;
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4();
            iVar9 = *piVar6;
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x7c);
          if (*(int *)(**(int **)(_UNK_0211f084 + 0x211eff0) + 0x74) == 0) {
            func_0x01384ab4(**(int **)(_UNK_0211f084 + 0x211eff0));
          }
          func_0x019959cc(iVar3,uVar11,1,0,param_4 == iVar9,0);
          return;
        }
      }
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0211f068 + 0x211eb34),10);
      uStack_38 = *(undefined4 *)(iVar9 + 0x28);
      puVar10 = *(undefined4 **)(_UNK_0211f06c + 0x211eb4c);
      iVar5 = func_0x01384abc(*puVar10,&uStack_38);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar5;
      uStack_2c = *(undefined4 *)(iVar9 + 0x2c);
      iVar5 = func_0x01384abc(*puVar10,&uStack_2c);
      if ((iVar5 != 0) &&
         (iVar4 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar5;
      uStack_30 = *(undefined4 *)(iVar9 + 0x30);
      iVar9 = func_0x01384abc(*puVar10,&uStack_30);
      if ((iVar9 != 0) &&
         (iVar5 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if ((uint)piVar6[3] < 3) {
        func_0x01384bf4();
      }
      piVar6[6] = iVar9;
      uVar11 = **(undefined4 **)(_UNK_0211f070 + 0x211ec68);
      if (iVar3 == 0) {
        uStack_38 = 0;
      }
      else {
        uStack_38 = FUN_0210e5f4(iVar3);
      }
      iVar9 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar9 != 0) &&
         (iVar5 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 4) {
        func_0x01384bf4();
      }
      piVar6[7] = iVar9;
      if (iVar3 == 0) {
        uStack_38 = 0;
      }
      else {
        uStack_38 = FUN_0210e2d4(iVar3);
      }
      iVar9 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar9 != 0) &&
         (iVar5 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 5) {
        func_0x01384bf4();
      }
      piVar6[8] = iVar9;
      uVar7 = 0;
      if ((iVar3 != 0) && (iVar9 = FUN_0210cd28(iVar3), iVar9 != 0)) {
        uStack_34 = 0;
        uStack_38 = 0;
        func_0x03507d38(&uStack_38,*(undefined4 *)(iVar9 + 8),
                        **(undefined4 **)(_UNK_0211f074 + 0x211ed6c));
        uVar7 = uStack_34;
      }
      uStack_38 = uVar7;
      iVar9 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar9 != 0) &&
         (iVar5 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 6) {
        func_0x01384bf4();
      }
      piVar6[9] = iVar9;
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_02116a8c(iVar3);
      }
      puVar10 = *(undefined4 **)(_UNK_0211f078 + 0x211ee04);
      uStack_38 = CONCAT31(uStack_38._1_3_,uVar2);
      iVar9 = func_0x01384abc(*puVar10,&uStack_38);
      if ((iVar9 != 0) &&
         (iVar3 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 7) {
        func_0x01384bf4();
      }
      piVar6[10] = iVar9;
      uStack_2c = CONCAT31(uStack_2c._1_3_,(char)iVar12);
      iVar9 = func_0x01384abc(*puVar10,&uStack_2c);
      if ((iVar9 != 0) &&
         (iVar3 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 8) {
        func_0x01384bf4();
      }
      piVar6[0xb] = iVar9;
      uStack_30 = CONCAT31(uStack_30._1_3_,bVar1);
      iVar9 = func_0x01384abc(*puVar10,&uStack_30);
      if ((iVar9 != 0) &&
         (iVar3 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 9) {
        func_0x01384bf4();
      }
      piVar6[0xc] = iVar9;
      if ((param_4 != 0) &&
         (iVar9 = func_0x01384ab8(param_4,*(undefined4 *)(*piVar6 + 0x20)), iVar9 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 10) {
        func_0x01384bf4();
      }
      piVar6[0xd] = param_4;
      uVar11 = func_0x0244f708(uVar11,piVar6,0);
      if (*(int *)(**(int **)(_UNK_0211f07c + 0x211ef5c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(uVar11,0);
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xb379,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar3,iVar9,param_3,param_4,0);
  }
  return;
}


