/* Ghidra 12.1.2 native pseudocode; RVA 0x3BDAF14; Merger.Boosters.Models.BoosterModel.GetBoosterProgress<object>; status ok */


/* WARNING: Possible PIC construction at 0x03cdb7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03cdb7e4) */
/* WARNING: Removing unreachable block (ram,0x03cdb7f4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ******
Merger_Boosters_Models_BoosterModel__GetBoosterProgress_object_
          (long param_1,undefined8 param_2,undefined8 *******param_3,long *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *****pppppuVar14;
  undefined8 ***pppuVar15;
  undefined8 extraout_x1;
  int iVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuVar22;
  long lVar23;
  long *plVar24;
  undefined8 ****ppppuVar25;
  undefined8 ***pppuVar26;
  undefined8 *****pppppuVar27;
  undefined8 ****ppppuVar28;
  undefined8 **ppuVar29;
  ulong uVar30;
  int *piVar31;
  undefined2 *puVar32;
  undefined8 uVar33;
  undefined8 ******ppppppuVar34;
  undefined8 ******ppppppuVar35;
  undefined2 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  long *plVar39;
  long *plVar40;
  undefined *puVar41;
  long *plVar42;
  undefined8 *******pppppppuVar43;
  ulong *puVar44;
  ulong *puVar45;
  undefined8 ******ppppppuVar46;
  long unaff_x26;
  ulong uVar47;
  undefined8 ******unaff_x27;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 *****apppppuStack_308 [19];
  ulong auStack_270 [29];
  undefined8 ******appppppuStack_188 [2];
  long lStack_178;
  undefined1 auStack_170 [8];
  long alStack_168 [11];
  undefined8 *******pppppppuStack_110;
  long lStack_108;
  undefined8 uStack_60;
  byte *pbVar13;
  byte *pbVar16;
  
  ppppppuVar21 = param_3[7];
  pppppppuVar18 = param_3;
  if (ppppppuVar21 == (undefined8 ******)0x0) {
    func_0x03280a18(PTR_DAT_077797c0);
    func_0x03280a18(PTR_DAT_077797c8);
    ppppppuVar21 = param_3[7];
    if (ppppppuVar21 == (undefined8 ******)0x0) {
      func_0x03256878(param_3);
      ppppppuVar21 = param_3[7];
    }
  }
  if ((*(byte *)((long)*ppppppuVar21 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar7 = func_0x03280ca0();
  func_0x04c0f7b0(lVar7,param_3[7][1]);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = param_2;
    func_0x032809c4((undefined8 *)(lVar7 + 0x10),param_2);
    uVar33 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077797c8);
    func_0x05355fbc(uVar8,lVar7,param_3[7][2],0);
    lVar7 = func_0x03d45130(uVar33,uVar8,*(undefined8 *)PTR_DAT_077797c0);
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar7 + 0x68);
    }
    pppppuVar14 = param_3[7][3];
    if ((*(byte *)((long)pppppuVar14 + 0x135) & 1) == 0) {
      pppppuVar14 = (undefined8 *****)func_0x0325681c(pppppuVar14);
    }
    lVar7 = func_0x03280b90(uVar8,pppppuVar14);
    pppppuVar14 = param_3[7][3];
    if ((*(byte *)((long)pppppuVar14 + 0x135) & 1) == 0) {
      pppppuVar14 = (undefined8 *****)func_0x0325681c(pppppuVar14);
    }
    if (lVar7 != 0) {
      ppppppuVar21 = (undefined8 ******)func_0x03280b90(lVar7,pppppuVar14);
      if (ppppppuVar21 != (undefined8 ******)0x0) {
        return ppppppuVar21;
      }
      func_0x03281048(lVar7,pppppuVar14);
    }
    return (undefined8 ******)0x0;
  }
  auVar48 = func_0x03280cac();
  ppppppuVar21 = auVar48._8_8_;
  pppppppuVar43 = auVar48._0_8_;
  uStack_60 = 0x3cdb068;
  ppppppuVar22 = pppppppuVar18[7];
  pppppppuVar19 = pppppppuVar18;
  if (ppppppuVar22 == (undefined8 ******)0x0) {
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0776b850);
    func_0x03280a18(PTR_DAT_077510c0);
    func_0x03280a18(PTR_DAT_0776f248);
    ppppppuVar22 = pppppppuVar18[7];
    if (ppppppuVar22 == (undefined8 ******)0x0) {
      func_0x03256878(pppppppuVar18);
      ppppppuVar22 = pppppppuVar18[7];
    }
  }
  if ((*(byte *)((long)*ppppppuVar22 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar7 = func_0x03280ca0();
  (*(code *)*pppppppuVar18[7][1])();
  pppppppuVar10 = pppppppuVar18;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = pppppppuVar43;
    func_0x032809c4((undefined8 *)(lVar7 + 0x10),pppppppuVar43);
    puVar38 = (undefined8 *)(lVar7 + 0x18);
    *puVar38 = ppppppuVar21;
    func_0x032809c4(puVar38,ppppppuVar21);
    if (pppppppuVar43[4] != (undefined8 ******)0x0) {
      pppppppuVar19 = *(undefined8 ********)PTR_DAT_077510c0;
      uVar9 = func_0x04fe2f70(pppppppuVar43[4],*puVar38);
      if ((uVar9 & 1) != 0) {
        return (undefined8 ******)0x0;
      }
      if ((*(byte *)((long)pppppppuVar18[7][2] + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppppuVar21 = (undefined8 ******)func_0x03280ca0();
      (*(code *)*pppppppuVar18[7][3])();
      if (pppppppuVar43[4] != (undefined8 ******)0x0) {
        func_0x04fe2d7c(pppppppuVar43[4],*(undefined8 *)(lVar7 + 0x18),ppppppuVar21,
                        *(undefined8 *)PTR_DAT_0776b850);
        pppppppuVar10 = (undefined8 *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e758);
        param_4 = (long *)0x0;
        pppppppuVar19 = (undefined8 *******)pppppppuVar18[7][4];
        func_0x056ed730(pppppppuVar10,lVar7);
        if (ppppppuVar21 != (undefined8 ******)0x0) {
          pppppuVar14 = *ppppppuVar21;
          uVar9 = (ulong)*(ushort *)((long)pppppuVar14 + 0x12e);
          if (uVar9 != 0) {
            ppppuVar25 = pppppuVar14[0x16] + 1;
            do {
              if (ppppuVar25[-1] == *(undefined8 ****)PTR_DAT_0776f248) {
                pppppuVar14 = pppppuVar14 + (long)(*(int *)ppppuVar25 + 3) * 2 + 0x27;
                goto LAB_03cdb214;
              }
              uVar9 = uVar9 - 1;
              ppppuVar25 = ppppuVar25 + 2;
            } while (uVar9 != 0);
          }
          pppppuVar14 = (undefined8 *****)
                        func_0x03256b10(ppppppuVar21,*(undefined8 ****)PTR_DAT_0776f248,3);
LAB_03cdb214:
          (*(code *)*pppppuVar14)(ppppppuVar21,pppppppuVar10,pppppuVar14[1]);
          return ppppppuVar21;
        }
      }
    }
  }
  auVar48 = func_0x03280cac();
  uVar8 = auVar48._8_8_;
  pppppppuVar18 = pppppppuVar19;
  plVar24 = param_4;
  if (param_4[7] == 0) {
    func_0x03280a18(PTR_DAT_077797d0);
    func_0x03280a18(PTR_DAT_077797d8);
    func_0x03280a18(PTR_DAT_077797e0);
    func_0x03280a18(PTR_DAT_0776fb48);
    func_0x03280a18(PTR_DAT_077797e8);
    func_0x03280a18(PTR_DAT_077797f0);
    func_0x03280a18(PTR_DAT_077797f8);
    func_0x03280a18(PTR_DAT_07779800);
    if (param_4[7] == 0) {
      func_0x03256878(param_4);
    }
  }
  plVar39 = *(long **)(auVar48._0_8_ + 0x50);
  if (plVar39 != (long *)0x0) {
    lVar7 = *plVar39;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_077797d0) {
          puVar38 = (undefined8 *)(lVar7 + (long)(*piVar31 + 4) * 0x10 + 0x138);
          goto LAB_03cdb334;
        }
        uVar9 = uVar9 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar9 != 0);
    }
    puVar38 = (undefined8 *)func_0x03256b10(plVar39,*(long *)PTR_DAT_077797d0,4);
LAB_03cdb334:
    pppppppuVar18 = (undefined8 *******)puVar38[1];
    ppppppuVar22 = (undefined8 ******)(*(code *)*puVar38)(plVar39,uVar8);
    if (ppppppuVar22 == (undefined8 ******)0x0) {
      uVar8 = func_0x055f7538(*(undefined8 *)PTR_DAT_077797e8,uVar8,*(undefined8 *)PTR_DAT_077797f8,
                              0);
      if (*(int *)(*(long *)PTR_DAT_0776fb48 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776fb48);
      }
      auVar48._8_8_ = *(undefined8 *)PTR_DAT_077797e0;
      auVar48._0_8_ = uVar8;
      uVar8 = 0x3cdb23c;
      pppppppuVar19 = (undefined8 *******)&uStack_60;
      goto SUB_03e5ad98;
    }
    if ((*(byte *)(*(long *)param_4[7] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar7 = func_0x03280ca0();
    Merger_Boosters_Declarations_Notifications_BoosterActivationNotification_TData____ctor
              (lVar7,*(undefined8 *)(param_4[7] + 8));
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_077797f0;
      func_0x032809c4();
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)PTR_DAT_07779800;
      func_0x032809c4();
      if ((*(byte *)(*(long *)(param_4[7] + 0x10) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar11 = func_0x03280ca0();
      Merger_Boosters_Declarations_Payloads_ActivateBoosterPayload_TData____ctor
                (lVar11,*(undefined8 *)(param_4[7] + 0x18));
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x10) = uVar8;
        func_0x032809c4((undefined8 *)(lVar11 + 0x10),uVar8);
        *(undefined8 *)(lVar11 + 0x18) = pppppppuVar19;
        func_0x032809c4((undefined8 *)(lVar11 + 0x18),pppppppuVar19);
        *(long *)(lVar7 + 0x30) = lVar11;
        func_0x032809c4((long *)(lVar7 + 0x30),lVar11);
        plVar39 = *(long **)(auVar48._0_8_ + 0x38);
        if (plVar39 != (long *)0x0) {
          lVar11 = *plVar39;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar31 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_077797d8) {
                puVar38 = (undefined8 *)(lVar11 + (long)*piVar31 * 0x10 + 0x138);
                goto LAB_03cdb4c8;
              }
              uVar9 = uVar9 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar9 != 0);
          }
          puVar38 = (undefined8 *)func_0x03256b10(plVar39,*(long *)PTR_DAT_077797d8,0);
LAB_03cdb4c8:
          (*(code *)*puVar38)(plVar39,lVar7,puVar38[1]);
          return ppppppuVar22;
        }
      }
    }
  }
  auVar49 = func_0x03280cac();
  ppppppuVar21 = auVar49._8_8_;
  lVar7 = tpidr_el0;
  lStack_108 = *(long *)(lVar7 + 0x28);
  lVar11 = plVar24[7];
  pppppppuVar43 = pppppppuVar18;
  plVar39 = plVar24;
  pppppppuStack_110 = pppppppuVar18;
  if (lVar11 == 0) {
    func_0x03280a18(PTR_DAT_077797d0);
    func_0x03280a18(PTR_DAT_077797d8);
    func_0x03280a18(PTR_DAT_077797e0);
    func_0x03280a18(PTR_DAT_0776fb48);
    func_0x03280a18(PTR_DAT_077797e8);
    func_0x03280a18(PTR_DAT_077797f0);
    func_0x03280a18(PTR_DAT_077797f8);
    func_0x03280a18(PTR_DAT_07779800);
    lVar11 = plVar24[7];
    if (lVar11 == 0) {
      func_0x03256878(plVar24);
      lVar11 = plVar24[7];
    }
  }
  plVar42 = (long *)(ulong)*(uint *)(*(long *)(lVar11 + 0x20) + 0xfc);
  lVar11 = -((long)plVar42 + 0xfU & 0x1fffffff0);
  pppppppuVar19 = (undefined8 *******)((long)&pppppppuStack_110 + lVar11);
  plVar40 = *(long **)(auVar49._0_8_ + 0x50);
  ppppppuVar22 = (undefined8 ******)0x0;
  if (plVar40 == (long *)0x0) goto LAB_03cdb848;
  lVar23 = *plVar40;
  uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
  if (uVar9 != 0) {
    piVar31 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
    do {
      if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_077797d0) {
        puVar38 = (undefined8 *)(lVar23 + (long)(*piVar31 + 4) * 0x10 + 0x138);
        goto LAB_03cdb62c;
      }
      uVar9 = uVar9 - 1;
      piVar31 = piVar31 + 4;
    } while (uVar9 != 0);
  }
  puVar38 = (undefined8 *)func_0x03256b10(plVar40,*(long *)PTR_DAT_077797d0,4);
LAB_03cdb62c:
  pppppppuVar43 = (undefined8 *******)puVar38[1];
  ppppppuVar22 = (undefined8 ******)(*(code *)*puVar38)(plVar40,ppppppuVar21);
  if (ppppppuVar22 == (undefined8 ******)0x0) {
    pppppppuVar10 =
         (undefined8 *******)
         func_0x055f7538(*(undefined8 *)PTR_DAT_077797e8,ppppppuVar21,
                         *(undefined8 *)PTR_DAT_077797f8,0);
    if (*(int *)(*(long *)PTR_DAT_0776fb48 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0776fb48);
    }
    auVar48._8_8_ = *(undefined8 *)PTR_DAT_077797e0;
    auVar48._0_8_ = pppppppuVar10;
    uVar8 = 0x3cdb7e4;
    pppppppuVar43 = pppppppuVar18;
SUB_03e5ad98:
    while( true ) {
      lVar7 = auVar48._8_8_;
      pppppppuVar19[-4] = (undefined8 ******)uVar8;
      pppppppuVar19[-3] = ppppppuVar21;
      pppppppuVar19[-2] = pppppppuVar43;
      pppppppuVar19[-1] = pppppppuVar10;
      if (*(long *)(lVar7 + 0x38) == 0) {
        func_0x03280a18(PTR_DAT_0774e4d8);
        func_0x03280a18(PTR_DAT_0776fb48);
        if (*(long *)(lVar7 + 0x38) == 0) {
          func_0x03256878(lVar7);
        }
      }
      pppppppuVar10 = (undefined8 *******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e4d8);
      func_0x057ced78(pppppppuVar10,auVar48._0_8_,0);
      if (*(int *)(*(long *)PTR_DAT_0776fb48 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar7 = **(long **)(lVar7 + 0x38);
      ppppppuVar21 = pppppppuVar19[-3];
      pppppppuVar19[-4] = pppppppuVar19[-4];
      pppppppuVar19[-2] = pppppppuVar19[-2];
      pppppppuVar19[-1] = pppppppuVar19[-1];
      plVar24 = *(long **)(lVar7 + 0x38);
      if (plVar24 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_0776f248);
        plVar24 = *(long **)(lVar7 + 0x38);
        if (plVar24 == (long *)0x0) {
          func_0x03256878(lVar7);
          plVar24 = *(long **)(lVar7 + 0x38);
        }
      }
      if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      ppppppuVar22 = (undefined8 ******)func_0x03280ca0();
      func_0x0446ec4c(ppppppuVar22,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 8));
      if (ppppppuVar22 != (undefined8 ******)0x0) break;
      uVar8 = 0x3e5ad98;
      auVar48 = func_0x03280cac();
      pppppppuVar43 = (undefined8 *******)0x0;
      pppppppuVar19 = pppppppuVar19 + -4;
    }
    pppppuVar14 = *ppppppuVar22;
    uVar9 = (ulong)*(ushort *)((long)pppppuVar14 + 0x12e);
    if (uVar9 != 0) {
      ppppuVar25 = pppppuVar14[0x16] + 1;
      do {
        if (ppppuVar25[-1] == *(undefined8 ****)PTR_DAT_0776f248) {
          pppppuVar14 = pppppuVar14 + (long)(*(int *)ppppuVar25 + 4) * 2 + 0x27;
          goto LAB_03e5ad74;
        }
        uVar9 = uVar9 - 1;
        ppppuVar25 = ppppuVar25 + 2;
      } while (uVar9 != 0);
    }
    pppppuVar14 = (undefined8 *****)
                  func_0x03256b10(ppppppuVar22,*(undefined8 ****)PTR_DAT_0776f248,4);
LAB_03e5ad74:
    (*(code *)*pppppuVar14)(ppppppuVar22,pppppppuVar10,pppppuVar14[1]);
    return ppppppuVar22;
  }
  if ((*(byte *)(*(long *)plVar24[7] + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  unaff_x26 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(plVar24[7] + 8))();
  if (unaff_x26 == 0) {
LAB_03cdb848:
    func_0x03280cac();
  }
  else {
    *(undefined8 *)(unaff_x26 + 0x10) = *(undefined8 *)PTR_DAT_077797f0;
    func_0x032809c4();
    *(undefined8 *)(unaff_x26 + 0x18) = *(undefined8 *)PTR_DAT_07779800;
    func_0x032809c4();
    if ((*(byte *)(*(long *)(plVar24[7] + 0x10) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x27 = (undefined8 ******)func_0x03280ca0();
    (*(code *)**(undefined8 **)(plVar24[7] + 0x18))();
    if (unaff_x27 == (undefined8 ******)0x0) goto LAB_03cdb848;
    func_0x02f17738(unaff_x27,*(undefined8 *)(*(long *)(plVar24[7] + 0x10) + 0x80),ppppppuVar21);
    lVar23 = plVar24[7];
    pppppppuVar43 = pppppppuVar18;
    if (-1 < *(int *)(*(long *)(lVar23 + 0x20) + 0x28)) {
      pppppppuVar43 = &pppppppuStack_110;
    }
    func_0x072ce970(pppppppuVar19,pppppppuVar43,plVar42);
    pppppppuVar43 = pppppppuVar19;
    plVar39 = plVar42;
    func_0x03280a3c(unaff_x27,*(long *)(*(long *)(lVar23 + 0x10) + 0x80) + 0x20);
    *(undefined8 *)(unaff_x26 + 0x30) = unaff_x27;
    func_0x032809c4((undefined8 *)(unaff_x26 + 0x30),unaff_x27);
    plVar40 = *(long **)(auVar49._0_8_ + 0x38);
    auVar49._8_8_ = lVar23;
    auVar49._0_8_ = plVar40;
    if (plVar40 == (long *)0x0) goto LAB_03cdb848;
    lVar23 = *plVar40;
    uVar9 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar9 != 0) {
      piVar31 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_077797d8) {
          puVar38 = (undefined8 *)(lVar23 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_03cdb804;
        }
        uVar9 = uVar9 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar9 != 0);
    }
    puVar38 = (undefined8 *)func_0x03256b10(plVar40,*(long *)PTR_DAT_077797d8,0);
LAB_03cdb804:
    pppppppuVar43 = (undefined8 *******)puVar38[1];
    (*(code *)*puVar38)(plVar40,unaff_x26);
    if (*(long *)(lVar7 + 0x28) == lStack_108) {
      return ppppppuVar22;
    }
  }
  auVar50 = func_0x072ce990();
  *(undefined1 **)(auStack_170 + lVar11) = &stack0xffffffffffffff00;
  *(undefined8 *)((long)alStack_168 + lVar11) = 0x3cdb850;
  *(long *)((long)alStack_168 + lVar11 + 8) = lVar7;
  *(undefined8 *******)((long)alStack_168 + lVar11 + 0x10) = unaff_x27;
  *(long *)((long)alStack_168 + lVar11 + 0x18) = unaff_x26;
  *(undefined8 ********)((long)alStack_168 + lVar11 + 0x20) = pppppppuVar19;
  *(long **)((long)alStack_168 + lVar11 + 0x28) = plVar42;
  *(undefined8 *******)((long)alStack_168 + lVar11 + 0x30) = ppppppuVar22;
  *(long **)((long)alStack_168 + lVar11 + 0x38) = plVar24;
  *(long *)((long)alStack_168 + lVar11 + 0x40) = auVar49._8_8_;
  *(undefined8 ********)((long)alStack_168 + lVar11 + 0x48) = pppppppuVar18;
  *(long *)((long)alStack_168 + lVar11 + 0x50) = auVar49._0_8_;
  uVar9 = tpidr_el0;
  *(undefined8 *)(auStack_170 + lVar11 + -8) = *(undefined8 *)(uVar9 + 0x28);
  *(undefined8 ********)((long)apppppuStack_308 + lVar11 + 0x180) = pppppppuVar43;
  plVar24 = (long *)plVar39[7];
  if (plVar24 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0776f248);
    plVar24 = (long *)plVar39[7];
    if (plVar24 == (long *)0x0) {
      func_0x03256878(plVar39);
      plVar24 = (long *)plVar39[7];
    }
  }
  uVar47 = (ulong)*(uint *)(plVar24[7] + 0xfc);
  puVar44 = (ulong *)((long)apppppuStack_308 + (lVar11 - (uVar47 + 0xf & 0x1fffffff0)) + 0x178);
  if ((*(byte *)(*plVar24 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar12 = func_0x03280ca0();
  (*(code *)**(undefined8 **)(plVar39[7] + 8))();
  plVar24 = *(long **)(auVar50._0_8_ + 0x50);
  puVar45 = puVar44;
  if (plVar24 == (long *)0x0) {
LAB_03cdbca4:
    func_0x03280cac();
LAB_03cdbca8:
    uVar8 = func_0x03280a2c(PTR_DAT_077797e8);
    uVar33 = func_0x03280a2c(PTR_DAT_07779808);
    pppppuVar14 = (undefined8 *****)0x0;
    plVar24 = (long *)func_0x055f7538(uVar8,auVar50._8_8_,uVar33);
    func_0x03280a2c(PTR_DAT_0774e4d8);
    uVar12 = func_0x03280ca0();
    ppppppuVar21 = (undefined8 ******)0x0;
    func_0x057ced78(uVar12,plVar24);
    ppppppuVar22 = (undefined8 ******)func_0x03280b7c(uVar12,plVar39);
  }
  else {
    lVar7 = *plVar24;
    unaff_x27 = *(undefined8 *******)(plVar39[7] + 0x10);
    uVar30 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar30 != 0) {
      piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(undefined8 ******)(piVar31 + -2) == unaff_x27[4]) {
          lVar7 = lVar7 + (long)(int)(*piVar31 + (uint)*(ushort *)(unaff_x27 + 10)) * 0x10 + 0x138;
          goto LAB_03cdb968;
        }
        uVar30 = uVar30 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar30 != 0);
    }
    lVar7 = func_0x03256b10(plVar24);
LAB_03cdb968:
    lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),unaff_x27);
    lVar7 = (**(code **)(lVar7 + 8))(plVar24,auVar50._8_8_,lVar7);
    if (uVar12 == 0) goto LAB_03cdbca4;
    plVar24 = (long *)(uVar12 + 0x10);
    *plVar24 = lVar7;
    func_0x032809c4(plVar24,lVar7);
    if (*plVar24 == 0) goto LAB_03cdbca8;
    if ((*(byte *)(*(long *)(plVar39[7] + 0x20) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    unaff_x27 = (undefined8 ******)func_0x03280ca0();
    (*(code *)**(undefined8 **)(plVar39[7] + 0x28))();
    if (unaff_x27 == (undefined8 ******)0x0) goto LAB_03cdbca4;
    (*(code *)**(undefined8 **)(plVar39[7] + 0x30))(unaff_x27,auVar50._8_8_);
    puVar41 = (undefined *)plVar39[7];
    pppppppuVar18 = pppppppuVar43;
    if (-1 < *(int *)(*(long *)(puVar41 + 0x38) + 0x28)) {
      pppppppuVar18 = (undefined8 *******)((long)apppppuStack_308 + lVar11 + 0x180);
    }
    func_0x072ce970(puVar44,pppppppuVar18,uVar47);
    puVar38 = *(undefined8 **)(puVar41 + 0x40);
    uVar8 = *puVar38;
    if (-1 < *(int *)(*(long *)(puVar41 + 0x38) + 0x28)) {
      puVar45 = (ulong *)*puVar44;
    }
    *(ulong **)((long)appppppuStack_188 + lVar11 + 8) = puVar45;
    pppppuVar14 = (undefined8 *****)((long)appppppuStack_188 + lVar11 + 8);
    ppppppuVar21 = unaff_x27;
    (*(code *)puVar38[2])(uVar8);
    plVar42 = *(long **)(auVar50._0_8_ + 0x30);
    plVar40 = (long *)0x0;
    if (plVar42 != (long *)0x0) {
      lVar7 = *plVar42;
      lVar23 = *(long *)(plVar39[7] + 0x48);
      uVar30 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar30 != 0) {
        piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)(lVar23 + 0x20)) {
            lVar7 = lVar7 + (long)(int)(*piVar31 + (uint)*(ushort *)(lVar23 + 0x50)) * 0x10 + 0x138;
            goto LAB_03cdbaa0;
          }
          uVar30 = uVar30 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar30 != 0);
      }
      lVar7 = func_0x03256b10(plVar42);
LAB_03cdbaa0:
      lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar23);
      plVar40 = (long *)(**(code **)(lVar7 + 8))(plVar42,unaff_x27,lVar7);
      lVar7 = *(long *)(plVar39[7] + 0x58);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      uVar30 = func_0x03280ca0(lVar7);
      (*(code *)**(undefined8 **)(plVar39[7] + 0x60))
                (uVar30,uVar12,*(undefined8 *)(plVar39[7] + 0x50));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar30;
      auVar50 = auVar3 << 0x40;
      if (plVar40 != (long *)0x0) {
        lVar7 = *(long *)(plVar39[7] + 0x18);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = func_0x0325681c(lVar7);
        }
        lVar23 = *plVar40;
        uVar12 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar12 != 0) {
          piVar31 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == lVar7) {
              puVar38 = (undefined8 *)(lVar23 + (long)*piVar31 * 0x10 + 0x138);
              goto LAB_03cdbb6c;
            }
            uVar12 = uVar12 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar12 != 0);
        }
        puVar38 = (undefined8 *)func_0x03256b10(plVar40,lVar7,0);
LAB_03cdbb6c:
        plVar39 = (long *)(*(code *)*puVar38)(plVar40,uVar30,puVar38[1]);
        plVar40 = (long *)*plVar24;
        auVar50._8_8_ = uVar30;
        auVar50._0_8_ = plVar40;
        uVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
        puVar41 = PTR_DAT_0776f248;
        auVar2._8_8_ = PTR_DAT_0776f248;
        auVar2._0_8_ = plVar40;
        if (plVar40 != (long *)0x0) {
          lVar7 = *plVar40;
          uVar30 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar30 != 0) {
            piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0776f248) {
                lVar7 = lVar7 + (long)(*piVar31 + 4) * 0x10 + 0x138;
                goto LAB_03cdbbf8;
              }
              uVar30 = uVar30 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar30 != 0);
          }
          lVar7 = func_0x03256b10(plVar40,*(long *)PTR_DAT_0776f248,4);
LAB_03cdbbf8:
          pppppuVar14 = (undefined8 *****)0x0;
          func_0x054221d4(uVar12,plVar40,*(undefined8 *)(lVar7 + 8));
          auVar50 = auVar2;
          if (plVar39 != (long *)0x0) {
            lVar7 = *plVar39;
            uVar30 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar30 != 0) {
              piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)puVar41) {
                  puVar38 = (undefined8 *)(lVar7 + (long)(*piVar31 + 1) * 0x10 + 0x138);
                  goto LAB_03cdbc60;
                }
                uVar30 = uVar30 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar30 != 0);
            }
            puVar38 = (undefined8 *)func_0x03256b10(plVar39,*(long *)puVar41,1);
LAB_03cdbc60:
            ppppppuVar21 = (undefined8 ******)puVar38[1];
            (*(code *)*puVar38)(plVar39,uVar12);
            goto LAB_03cdbc70;
          }
        }
      }
      goto LAB_03cdbca4;
    }
LAB_03cdbc70:
    auVar50._8_8_ = puVar41;
    auVar50._0_8_ = plVar40;
    ppppppuVar22 = (undefined8 ******)*plVar24;
    if (*(long *)(uVar9 + 0x28) == *(long *)(auStack_170 + lVar11 + -8)) {
      return ppppppuVar22;
    }
  }
  auVar48 = func_0x072ce990(ppppppuVar22);
  puVar44[-4] = 0x3cdbd0c;
  puVar44[-3] = uVar12;
  puVar44[-2] = (ulong)plVar39;
  puVar44[-1] = (ulong)plVar24;
  ppppppuVar22 = ppppppuVar21;
  if (ppppppuVar21[7] == (undefined8 *****)0x0) {
    func_0x03280a18(PTR_DAT_077797f0);
    func_0x03280a18(PTR_DAT_077720b0);
    if (ppppppuVar21[7] == (undefined8 *****)0x0) {
      func_0x03256878(ppppppuVar21);
    }
  }
  if (auVar48._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x03cdbd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppppppuVar21 = (undefined8 ******)
                   (*(code *)*ppppppuVar21[7][1])
                             (auVar48._0_8_,*(undefined8 *)PTR_DAT_077797f0,
                              *(undefined8 *)PTR_DAT_077720b0,auVar48._8_8_,0x1e,2,0);
    return ppppppuVar21;
  }
  auVar51 = func_0x03280cac();
  uVar12 = auVar51._8_8_;
  lVar7 = auVar51._0_8_;
  puVar44[-0xc] = 0x3cdbd9c;
  puVar44[-0xb] = (ulong)puVar45;
  puVar44[-10] = (ulong)pppppppuVar43;
  puVar44[-9] = auVar50._8_8_;
  puVar44[-8] = auVar50._0_8_;
  puVar44[-7] = (ulong)ppppppuVar21;
  puVar44[-6] = 0;
  puVar44[-5] = auVar48._8_8_;
  ppppuVar25 = pppppuVar14[7];
  ppppppuVar21 = ppppppuVar22;
  pppppuVar20 = pppppuVar14;
  if (ppppuVar25 == (undefined8 ****)0x0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0776f248);
    ppppuVar25 = pppppuVar14[7];
    if (ppppuVar25 == (undefined8 ****)0x0) {
      func_0x03256878(pppppuVar14);
      ppppuVar25 = pppppuVar14[7];
    }
  }
  if ((*(byte *)((long)*ppppuVar25 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar30 = func_0x03280ca0();
  func_0x04c09dec(uVar30,pppppuVar14[7][1]);
  if (uVar30 != 0) {
    *(long *)(uVar30 + 0x10) = lVar7;
    func_0x032809c4((long *)(uVar30 + 0x10),lVar7);
    puVar45 = (ulong *)(uVar30 + 0x18);
    *puVar45 = uVar12;
    func_0x032809c4(puVar45,uVar12);
    plVar24 = *(long **)(lVar7 + 0x38);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    auVar51 = auVar4 << 0x40;
    if (plVar24 != (long *)0x0) {
      lVar7 = *plVar24;
      puVar38 = (undefined8 *)*puVar45;
      pppppppuVar43 = (undefined8 *******)pppppuVar14[7][3];
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(undefined8 *******)(piVar31 + -2) == pppppppuVar43[4]) {
            lVar7 = lVar7 + (long)(int)(*piVar31 + (uint)*(ushort *)(pppppppuVar43 + 10)) * 0x10 +
                    0x138;
            goto LAB_03cdbea0;
          }
          uVar12 = uVar12 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar12 != 0);
      }
      lVar7 = func_0x03256b10(plVar24);
LAB_03cdbea0:
      lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),pppppppuVar43);
      ppppppuVar22 = (undefined8 ******)(**(code **)(lVar7 + 8))(plVar24,puVar38,ppppppuVar22,lVar7)
      ;
      pppuVar26 = pppppuVar14[7][6];
      if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
        pppuVar26 = (undefined8 ***)func_0x0325681c(pppuVar26);
      }
      uVar8 = func_0x03280ca0(pppuVar26);
      auVar51._8_8_ = puVar38;
      auVar51._0_8_ = uVar8;
      ppppppuVar21 = (undefined8 ******)pppppuVar14[7][5];
      pppppuVar20 = (undefined8 *****)pppppuVar14[7][7];
      func_0x054221d4(uVar8,uVar30);
      if (ppppppuVar22 != (undefined8 ******)0x0) {
        pppuVar26 = pppppuVar14[7][4];
        if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
          pppuVar26 = (undefined8 ***)func_0x0325681c(pppuVar26);
        }
        pppppuVar27 = *ppppppuVar22;
        uVar12 = (ulong)*(ushort *)((long)pppppuVar27 + 0x12e);
        if (uVar12 != 0) {
          ppppuVar25 = pppppuVar27[0x16] + 1;
          do {
            if (ppppuVar25[-1] == pppuVar26) {
              pppppuVar27 = pppppuVar27 + (long)*(int *)ppppuVar25 * 2 + 0x27;
              goto LAB_03cdbf6c;
            }
            uVar12 = uVar12 - 1;
            ppppuVar25 = ppppuVar25 + 2;
          } while (uVar12 != 0);
        }
        pppppuVar27 = (undefined8 *****)func_0x03256b10(ppppppuVar22,pppuVar26,0);
LAB_03cdbf6c:
        ppppppuVar21 = (undefined8 ******)pppppuVar27[1];
        plVar24 = (long *)(*(code *)*pppppuVar27)(ppppppuVar22,uVar8);
        pppuVar26 = pppppuVar14[7][10];
        if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
          pppuVar26 = (undefined8 ***)func_0x0325681c(pppuVar26);
        }
        if (*(int *)(pppuVar26 + 0x1c) == 0) {
          func_0x03280b8c(pppuVar26);
        }
        pppuVar26 = pppppuVar14[7][10];
        if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
          pppuVar26 = (undefined8 ***)func_0x0325681c();
        }
        puVar37 = pppuVar26[0x17][1];
        if (puVar37 == (undefined8 *)0x0) {
          pppuVar26 = pppppuVar14[7][10];
          if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
            pppuVar26 = (undefined8 ***)func_0x0325681c();
          }
          if (*(int *)(pppuVar26 + 0x1c) == 0) {
            func_0x03280b8c();
          }
          pppuVar26 = pppppuVar14[7][10];
          if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
            pppuVar26 = (undefined8 ***)func_0x0325681c();
          }
          puVar38 = *pppuVar26[0x17];
          puVar37 = (undefined8 *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
          pppppuVar20 = (undefined8 *****)0x0;
          ppppppuVar21 = (undefined8 ******)pppppuVar14[7][0xb];
          func_0x054221d4(puVar37,puVar38);
          pppuVar26 = pppppuVar14[7][10];
          if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
            pppuVar26 = (undefined8 ***)func_0x0325681c();
          }
          pppuVar26[0x17][1] = puVar37;
          pppuVar26 = pppppuVar14[7][10];
          if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
            pppuVar26 = (undefined8 ***)func_0x0325681c();
          }
          func_0x032809c4(pppuVar26[0x17] + 1,puVar37);
        }
        auVar51._8_8_ = puVar38;
        auVar51._0_8_ = puVar37;
        uVar30 = 0;
        if (plVar24 != (long *)0x0) {
          lVar7 = *plVar24;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar38 = (undefined8 *)(lVar7 + (long)(*piVar31 + 1) * 0x10 + 0x138);
                goto LAB_03cdc0cc;
              }
              uVar9 = uVar9 - 1;
              piVar31 = piVar31 + 4;
            } while (uVar9 != 0);
          }
          puVar38 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0776f248,1);
LAB_03cdc0cc:
          (*(code *)*puVar38)(plVar24,puVar37,puVar38[1]);
          return ppppppuVar22;
        }
      }
    }
  }
  auVar52 = func_0x03280cac();
  ppppuVar25 = auVar52._0_8_;
  puVar44[-0x18] = (ulong)(auStack_170 + lVar11);
  puVar44[-0x17] = 0x3cdc0f8;
  puVar44[-0x16] = uVar9;
  puVar44[-0x15] = (ulong)unaff_x27;
  puVar44[-0x14] = uVar47;
  puVar44[-0x13] = (ulong)puVar45;
  puVar44[-0x12] = (ulong)pppppppuVar43;
  puVar44[-0x11] = auVar51._8_8_;
  puVar44[-0x10] = auVar51._0_8_;
  puVar44[-0xf] = uVar30;
  puVar44[-0xe] = (ulong)ppppppuVar22;
  puVar44[-0xd] = (ulong)pppppuVar14;
  lVar7 = tpidr_el0;
  puVar44[-0x19] = *(ulong *)(lVar7 + 0x28);
  puVar44[-0x1d] = (ulong)ppppppuVar21;
  ppppuVar28 = pppppuVar20[7];
  ppppppuVar22 = ppppppuVar21;
  if (ppppuVar28 == (undefined8 ****)0x0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0776f248);
    ppppuVar28 = pppppuVar20[7];
    if (ppppuVar28 == (undefined8 ****)0x0) {
      func_0x03256878(pppppuVar20);
      ppppuVar28 = pppppuVar20[7];
    }
  }
  ppppppuVar46 = (undefined8 ******)(ulong)*(uint *)((long)ppppuVar28[2] + 0xfc);
  ppppppuVar34 = (undefined8 ******)
                 ((long)puVar44 + (-0xf0 - ((long)ppppppuVar46 + 0xfU & 0x1fffffff0)));
  if ((*(byte *)((long)*ppppuVar28 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  pppppuVar14 = (undefined8 *****)func_0x03280ca0();
  (*(code *)*pppppuVar20[7][1])();
  ppppppuVar35 = ppppppuVar34;
  if (pppppuVar14 == (undefined8 *****)0x0) {
LAB_03cdc4d4:
    func_0x03280cac();
  }
  else {
    pppppuVar14[2] = ppppuVar25;
    func_0x032809c4(pppppuVar14 + 2,ppppuVar25);
    pppppuVar27 = pppppuVar14 + 3;
    *pppppuVar27 = auVar52._8_8_;
    func_0x032809c4(pppppuVar27,auVar52._8_8_);
    ppppuVar28 = pppppuVar20[7];
    pppuVar26 = ppppuVar25[7];
    ppppuVar25 = *pppppuVar27;
    auVar5._8_8_ = ppppuVar25;
    auVar5._0_8_ = pppuVar26;
    auVar52._8_8_ = ppppuVar25;
    auVar52._0_8_ = pppuVar26;
    ppppppuVar22 = ppppppuVar21;
    if (-1 < *(int *)(ppppuVar28[2] + 5)) {
      ppppppuVar22 = (undefined8 ******)(puVar44 + -0x1d);
    }
    func_0x072ce970(ppppppuVar34,ppppppuVar22);
    ppppppuVar22 = ppppppuVar46;
    if (pppuVar26 == (undefined8 ***)0x0) goto LAB_03cdc4d4;
    pppuVar15 = ppppuVar28[3];
    ppppppuVar21 = ppppppuVar34;
    if (-1 < *(int *)(ppppuVar28[2] + 5)) {
      ppppppuVar21 = (undefined8 ******)*ppppppuVar34;
    }
    ppuVar29 = *pppuVar26;
    uVar9 = (ulong)*(ushort *)((long)ppuVar29 + 0x12e);
    if (uVar9 != 0) {
      piVar31 = (int *)(ppuVar29[0x16] + 1);
      do {
        if (*(undefined8 ***)(piVar31 + -2) == pppuVar15[4]) {
          ppuVar29 = ppuVar29 + (long)(int)(*piVar31 + (uint)*(ushort *)(pppuVar15 + 10)) * 2 + 0x27
          ;
          goto LAB_03cdc268;
        }
        uVar9 = uVar9 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar9 != 0);
    }
    ppuVar29 = (undefined8 **)func_0x03256b10(pppuVar26);
LAB_03cdc268:
    lVar11 = func_0x03280b88(ppuVar29[1],pppuVar15);
    puVar44[-0x1c] = (ulong)ppppuVar25;
    puVar44[-0x1b] = (ulong)ppppppuVar21;
    (**(code **)(lVar11 + 0x10))
              (*(undefined8 *)(lVar11 + 8),lVar11,pppuVar26,puVar44 + -0x1c,puVar44 + -0x1a);
    ppppppuVar35 = (undefined8 ******)puVar44[-0x1a];
    if ((*(byte *)((long)pppppuVar20[7][6] + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    ppppppuVar21 = (undefined8 ******)func_0x03280ca0();
    ppppppuVar22 = (undefined8 ******)pppppuVar20[7][5];
    (*(code *)*pppppuVar20[7][7])(ppppppuVar21,pppppuVar14);
    auVar52 = auVar5;
    if (ppppppuVar35 == (undefined8 ******)0x0) goto LAB_03cdc4d4;
    pppuVar15 = pppppuVar20[7][4];
    if ((*(byte *)((long)pppuVar15 + 0x135) & 1) == 0) {
      pppuVar15 = (undefined8 ***)func_0x0325681c(pppuVar15);
    }
    pppppuVar14 = *ppppppuVar35;
    uVar9 = (ulong)*(ushort *)((long)pppppuVar14 + 0x12e);
    if (uVar9 != 0) {
      ppppuVar28 = pppppuVar14[0x16] + 1;
      do {
        if (ppppuVar28[-1] == pppuVar15) {
          pppppuVar14 = pppppuVar14 + (long)*(int *)ppppuVar28 * 2 + 0x27;
          goto LAB_03cdc330;
        }
        uVar9 = uVar9 - 1;
        ppppuVar28 = ppppuVar28 + 2;
      } while (uVar9 != 0);
    }
    pppppuVar14 = (undefined8 *****)func_0x03256b10(ppppppuVar35,pppuVar15,0);
LAB_03cdc330:
    ppppppuVar22 = (undefined8 ******)pppppuVar14[1];
    pppppuVar14 = (undefined8 *****)(*(code *)*pppppuVar14)(ppppppuVar35,ppppppuVar21);
    pppuVar15 = pppppuVar20[7][10];
    if ((*(byte *)((long)pppuVar15 + 0x135) & 1) == 0) {
      pppuVar15 = (undefined8 ***)func_0x0325681c(pppuVar15);
    }
    if (*(int *)(pppuVar15 + 0x1c) == 0) {
      func_0x03280b8c(pppuVar15);
    }
    pppuVar15 = pppppuVar20[7][10];
    if ((*(byte *)((long)pppuVar15 + 0x135) & 1) == 0) {
      pppuVar15 = (undefined8 ***)func_0x0325681c();
    }
    ppppppuVar21 = (undefined8 ******)pppuVar15[0x17][1];
    if (ppppppuVar21 == (undefined8 ******)0x0) {
      pppuVar26 = pppppuVar20[7][10];
      if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
        pppuVar26 = (undefined8 ***)func_0x0325681c();
      }
      if (*(int *)(pppuVar26 + 0x1c) == 0) {
        func_0x03280b8c();
      }
      pppuVar26 = pppppuVar20[7][10];
      if ((*(byte *)((long)pppuVar26 + 0x135) & 1) == 0) {
        pppuVar26 = (undefined8 ***)func_0x0325681c();
      }
      pppuVar26 = (undefined8 ***)*pppuVar26[0x17];
      ppppppuVar21 = (undefined8 ******)func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
      ppppppuVar22 = (undefined8 ******)pppppuVar20[7][0xb];
      func_0x054221d4(ppppppuVar21,pppuVar26,ppppppuVar22,0);
      pppuVar15 = pppppuVar20[7][10];
      if ((*(byte *)((long)pppuVar15 + 0x135) & 1) == 0) {
        pppuVar15 = (undefined8 ***)func_0x0325681c();
      }
      pppuVar15[0x17][1] = ppppppuVar21;
      pppuVar15 = pppppuVar20[7][10];
      if ((*(byte *)((long)pppuVar15 + 0x135) & 1) == 0) {
        pppuVar15 = (undefined8 ***)func_0x0325681c();
      }
      func_0x032809c4(pppuVar15[0x17] + 1,ppppppuVar21);
    }
    auVar52._0_8_ = pppuVar26;
    if (pppppuVar14 == (undefined8 *****)0x0) goto LAB_03cdc4d4;
    ppppuVar25 = *pppppuVar14;
    uVar9 = (ulong)*(ushort *)((long)ppppuVar25 + 0x12e);
    if (uVar9 != 0) {
      pppuVar26 = ppppuVar25[0x16] + 1;
      do {
        if (pppuVar26[-1] == *(undefined8 ***)PTR_DAT_0776f248) {
          ppppuVar25 = ppppuVar25 + (long)(*(int *)pppuVar26 + 1) * 2 + 0x27;
          goto LAB_03cdc490;
        }
        uVar9 = uVar9 - 1;
        pppuVar26 = pppuVar26 + 2;
      } while (uVar9 != 0);
    }
    ppppuVar25 = (undefined8 ****)func_0x03256b10(pppppuVar14,*(undefined8 ***)PTR_DAT_0776f248,1);
LAB_03cdc490:
    ppppppuVar22 = (undefined8 ******)ppppuVar25[1];
    (*(code *)*ppppuVar25)(pppppuVar14,ppppppuVar21);
    if (*(ulong *)(lVar7 + 0x28) == puVar44[-0x19]) {
      return ppppppuVar35;
    }
  }
  func_0x072ce990();
  puVar41 = PTR_DAT_077797a8;
  ppppppuVar34[-8] = (undefined8 *****)0x3cdc4dc;
  ppppppuVar34[-6] = auVar52._8_8_;
  ppppppuVar34[-5] = auVar52._0_8_;
  ppppppuVar34[-4] = ppppppuVar21;
  ppppppuVar34[-3] = pppppuVar14;
  ppppppuVar34[-2] = ppppppuVar35;
  ppppppuVar34[-1] = pppppuVar20;
  ppppppuVar21 = ppppppuVar22;
  if ((bRam0000000007e17d83 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779810);
    func_0x03280a18(PTR_DAT_077797a8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_0774e6b8);
    func_0x03280a18(PTR_DAT_0776a998);
    bRam0000000007e17d83 = 1;
  }
  pppppuVar14 = (undefined8 *****)func_0x03280b90(extraout_x1,*(undefined8 *)puVar41);
  puVar6 = PTR_DAT_077730b8;
  if (pppppuVar14 == (undefined8 *****)0x0) {
    pppppuVar20 = (undefined8 *****)0x0;
    *ppppppuVar22 = (undefined8 *****)0x0;
LAB_03cdc7cc:
    func_0x032809c4(ppppppuVar22,pppppuVar20);
    return (undefined8 ******)(ulong)(pppppuVar14 != (undefined8 *****)0x0);
  }
  pppppuVar20 = (undefined8 *****)func_0x03280afc(*(undefined8 *)PTR_DAT_0774e6b8,5);
  lVar7 = *(long *)puVar6;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x03280b8c(lVar7);
    lVar7 = *(long *)puVar6;
  }
  plVar24 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar7 = *plVar24;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar31 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_07779818) {
          puVar38 = (undefined8 *)(lVar7 + (long)*piVar31 * 0x10 + 0x138);
          goto LAB_03cdc624;
        }
        uVar9 = uVar9 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar9 != 0);
    }
    ppppppuVar21 = (undefined8 ******)0x0;
    puVar38 = (undefined8 *)func_0x03256b10(plVar24);
LAB_03cdc624:
    ppppuVar25 = (undefined8 ****)(*(code *)*puVar38)(plVar24,puVar38[1]);
    if (pppppuVar20 != (undefined8 *****)0x0) {
      if (*(int *)(pppppuVar20 + 3) != 0) {
        pppppuVar20[4] = ppppuVar25;
        func_0x032809c4(pppppuVar20 + 4,ppppuVar25);
        puVar6 = PTR_DAT_0776a998;
        if (1 < *(uint *)(pppppuVar20 + 3)) {
          pppppuVar20[5] = *(undefined8 *****)PTR_DAT_0776a998;
          func_0x032809c4();
          ppppuVar25 = *pppppuVar14;
          uVar9 = (ulong)*(ushort *)((long)ppppuVar25 + 0x12e);
          if (uVar9 != 0) {
            pppuVar26 = ppppuVar25[0x16] + 1;
            do {
              if (pppuVar26[-1] == *(undefined8 ***)puVar41) {
                ppppuVar25 = ppppuVar25 + (long)(*(int *)pppuVar26 + 1) * 2 + 0x27;
                goto LAB_03cdc6c4;
              }
              uVar9 = uVar9 - 1;
              pppuVar26 = pppuVar26 + 2;
            } while (uVar9 != 0);
          }
          ppppppuVar21 = (undefined8 ******)0x1;
          ppppuVar25 = (undefined8 ****)func_0x03256b10(pppppuVar14);
LAB_03cdc6c4:
          lVar7 = (*(code *)*ppppuVar25)(pppppuVar14,ppppuVar25[1]);
          if (lVar7 == 0) goto LAB_03cdc7f4;
          ppppppuVar34[-0xb] = *(undefined8 ******)PTR_DAT_07779810;
          ppppppuVar34[-10] = (undefined8 *****)0xffffffffffffffff;
          *(undefined4 *)(ppppppuVar34 + -9) = *(undefined4 *)(lVar7 + 0x14);
          ppppuVar25 = (undefined8 ****)func_0x057cd6e4(ppppppuVar34 + -0xb,0);
          if (2 < *(uint *)(pppppuVar20 + 3)) {
            pppppuVar20[6] = ppppuVar25;
            func_0x032809c4(pppppuVar20 + 6,ppppuVar25);
            puVar41 = PTR_DAT_07779820;
            if (3 < *(uint *)(pppppuVar20 + 3)) {
              pppppuVar20[7] = *(undefined8 *****)puVar6;
              func_0x032809c4();
              ppppuVar25 = *pppppuVar14;
              uVar9 = (ulong)*(ushort *)((long)ppppuVar25 + 0x12e);
              if (uVar9 != 0) {
                pppuVar26 = ppppuVar25[0x16] + 1;
                do {
                  if (pppuVar26[-1] == *(undefined8 ***)puVar41) {
                    ppppuVar25 = ppppuVar25 + (long)*(int *)pppuVar26 * 2 + 0x27;
                    goto LAB_03cdc78c;
                  }
                  uVar9 = uVar9 - 1;
                  pppuVar26 = pppuVar26 + 2;
                } while (uVar9 != 0);
              }
              ppppppuVar21 = (undefined8 ******)0x0;
              ppppuVar25 = (undefined8 ****)func_0x03256b10(pppppuVar14);
LAB_03cdc78c:
              ppppuVar25 = (undefined8 ****)(*(code *)*ppppuVar25)(pppppuVar14,ppppuVar25[1]);
              if (4 < *(uint *)(pppppuVar20 + 3)) {
                pppppuVar20[8] = ppppuVar25;
                func_0x032809c4();
                pppppuVar20 = (undefined8 *****)func_0x055f7bd4(pppppuVar20,0);
                *ppppppuVar22 = pppppuVar20;
                goto LAB_03cdc7cc;
              }
            }
          }
        }
      }
      func_0x03280cb4();
    }
  }
LAB_03cdc7f4:
  auVar53 = func_0x03280cac();
  pbVar16 = auVar53._8_8_;
  pbVar13 = auVar53._0_8_;
  iVar17 = (int)ppppppuVar21;
  if (((ulong)((long)pbVar13 - (long)pbVar16) < ((ulong)ppppppuVar21 & 0xffffffff)) ||
     ((ulong)((long)pbVar16 - (long)pbVar13) < ((ulong)ppppppuVar21 & 0xffffffff))) {
    ppppppuVar21 = (undefined8 ******)
                   (*(code *)PTR_memmove_07861088)
                             (pbVar13,pbVar16,(ulong)ppppppuVar21 & 0xffffffff,0);
    return ppppppuVar21;
  }
  ppppppuVar34[-0x10] = (undefined8 *****)0x3cdc7f8;
  ppppppuVar34[-0xf] = pppppuVar20;
  ppppppuVar34[-0xe] = pppppuVar14;
  ppppppuVar34[-0xd] = ppppppuVar22;
  uVar9 = (ulong)ppppppuVar21 & 0xffffffff;
  if (0x20 < iVar17) {
    ppppppuVar34[-0x11] = (undefined8 *****)(ulong)*pbVar13;
    func_0x0580a9dc(ppppppuVar34 + -0x11,0);
    ppppppuVar21 = (undefined8 ******)func_0x032a26f8(pbVar13,pbVar16,uVar9);
    return ppppppuVar21;
  }
  if (((auVar53._8_4_ | auVar53._0_4_) & 3) != 0) {
    if ((0 < iVar17) && ((auVar53._0_4_ & auVar53._8_4_ & 1) != 0)) {
      uVar9 = (ulong)(iVar17 - 1);
      auVar53._8_8_ = pbVar16 + 1;
      auVar53._0_8_ = pbVar13 + 1;
      *pbVar13 = *pbVar16;
    }
    puVar32 = auVar53._8_8_;
    puVar36 = auVar53._0_8_;
    if ((((auVar53._0_4_ >> 1 & 1) != 0) && (1 < (int)uVar9)) && ((auVar53._8_4_ >> 1 & 1) != 0)) {
      uVar9 = (ulong)((int)uVar9 - 2);
      auVar53._8_8_ = puVar32 + 1;
      auVar53._0_8_ = puVar36 + 1;
      *puVar36 = *puVar32;
    }
    uVar1 = auVar53._0_4_ | auVar53._8_4_;
    if ((uVar1 & 1) != 0) {
      ppppppuVar21 = (undefined8 ******)func_0x057c45e0(auVar53._0_8_,auVar53._8_8_,uVar9);
      return ppppppuVar21;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      ppppppuVar21 = (undefined8 ******)func_0x057c4574(auVar53._0_8_,auVar53._8_8_,uVar9);
      return ppppppuVar21;
    }
  }
  ppppppuVar21 = (undefined8 ******)func_0x057c44f8(auVar53._0_8_,auVar53._8_8_,uVar9);
  return ppppppuVar21;
}

