/* Ghidra 12.1.2 native pseudocode; RVA 0x6912F4C; MergeEngine.Configuration.LocalMergeItemsConfig.IsLocalItem; status ok */


ulong MergeEngine_Configuration_LocalMergeItemsConfig__IsLocalItem
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined1 auVar24 [16];
  int iStack_a8;
  int iStack_a4;
  
  if ((bRam0000000007e299e8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07757c48);
    bRam0000000007e299e8 = 1;
  }
  lVar9 = func_0x06a12d04(param_1);
  if (lVar9 == 0) {
    lVar9 = func_0x03280cac();
    if ((bRam0000000007e299e9 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e6f78);
      bRam0000000007e299e9 = 1;
    }
    lVar9 = *(long *)(lVar9 + 0x58);
    if (lVar9 != 0) {
      lVar14 = *(long *)PTR_DAT_077e6f78;
      lVar13 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      uVar17 = func_0x03280ca0(lVar13);
      func_0x04545928(uVar17,lVar9,
                      *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0xa0));
      return uVar17;
    }
    auVar24 = func_0x03280cac();
    uVar5 = auVar24._8_8_;
    uVar17 = *(ulong *)(auVar24._0_8_ + 0x60);
    if ((bRam0000000007e1cd68 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e5d8,uVar5,0);
      bRam0000000007e1cd68 = 1;
    }
    if ((uVar17 == 0) || (*(int *)(uVar17 + 0x10) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((uVar5 == 0) || (*(int *)(uVar5 + 0x10) == 0)) {
      if (bVar1) {
        uVar17 = **(ulong **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
      }
      return uVar17;
    }
    if (bVar1) {
      return uVar5;
    }
    if (uVar17 == 0) {
      auVar24 = func_0x03280cac();
      lVar9 = auVar24._8_8_;
      lVar13 = auVar24._0_8_;
      if (lVar13 == lVar9) {
        uVar22 = 1;
      }
      else {
        uVar22 = 0;
        if ((lVar13 != 0) && (lVar9 != 0)) {
          if (*(int *)(lVar13 + 0x10) == *(int *)(lVar9 + 0x10)) {
            lVar14 = lVar13 + 0x14;
            lVar9 = lVar9 + 0x14;
            lVar13 = (long)*(int *)(lVar13 + 0x10) << 1;
            if (lVar14 != lVar9) {
              lVar10 = func_0x057e39f8(0,0,lVar13,0);
              uVar12 = func_0x057e3a04(lVar13,0);
              uVar17 = func_0x057e3a10(uVar12,0);
              if (7 < uVar17) {
                lVar13 = func_0x057e3a24(uVar12,8,0);
                while( true ) {
                  uVar17 = func_0x057e3a10(lVar13,0);
                  uVar5 = func_0x057e3a10(lVar10,0);
                  if (uVar17 <= uVar5) {
                    return (ulong)(*(long *)(lVar14 + lVar13) == *(long *)(lVar9 + lVar13));
                  }
                  uVar17 = func_0x057f2854(*(undefined8 *)(lVar14 + lVar10),
                                           *(undefined8 *)(lVar9 + lVar10),0);
                  if ((uVar17 & 1) != 0) break;
                  lVar10 = func_0x057e3a1c(lVar10,8,0);
                }
                return 0;
              }
              uVar17 = func_0x057e3a10(uVar12,0);
              uVar5 = func_0x057e3a10(lVar10,0);
              if (uVar5 < uVar17) {
                do {
                  bVar1 = *(char *)(lVar14 + lVar10) == *(char *)(lVar9 + lVar10);
                  uVar17 = (ulong)bVar1;
                  if (!bVar1) {
                    return uVar17;
                  }
                  lVar10 = func_0x057e3a1c(lVar10,1,0);
                  uVar5 = func_0x057e3a10(uVar12,0);
                  uVar20 = func_0x057e3a10(lVar10,0);
                } while (uVar20 < uVar5);
                return uVar17;
              }
            }
            return 1;
          }
          uVar22 = 0;
        }
      }
      return (ulong)uVar22;
    }
    iVar2 = *(int *)(uVar17 + 0x10);
    uVar20 = func_0x032bc400(*(int *)(uVar5 + 0x10) + iVar2);
    func_0x055f73c0(uVar20,0,uVar17);
    func_0x055f73c0(uVar20,iVar2,uVar5);
    return uVar20;
  }
  lVar13 = *(long *)PTR_DAT_07757c48;
  if (*(long *)(lVar9 + 0x10) == 0) {
    return 0;
  }
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0xb0);
  iVar2 = func_0x053c438c();
  iVar11 = (int)uVar12;
  lVar14 = *(long *)(lVar9 + 0x10);
  if (lVar14 != 0) {
    uVar22 = *(uint *)(lVar14 + 0x18);
    iVar23 = 0;
    if (uVar22 != 0) {
      iVar23 = iVar2 / (int)uVar22;
    }
    uVar3 = iVar2 - iVar23 * uVar22;
    if (uVar3 < uVar22) {
      uVar22 = *(int *)(lVar14 + (long)(int)uVar3 * 4 + 0x20) - 1;
      if ((int)uVar22 < 0) {
        return 0;
      }
      lVar14 = *(long *)(lVar9 + 0x18);
      if (lVar14 == 0) goto LAB_053c06e8;
      uVar15 = *(undefined8 *)(lVar14 + 0x18);
      iVar23 = 0;
      while (iVar11 = (int)uVar12, uVar22 < (uint)uVar15) {
        if (*(int *)(lVar14 + (ulong)uVar22 * 0x10 + 0x20) == iVar2) {
          plVar19 = *(long **)(lVar9 + 0x30);
          if (plVar19 == (long *)0x0) goto LAB_053c06e8;
          lVar10 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x20);
          uVar15 = *(undefined8 *)(lVar14 + (ulong)uVar22 * 0x10 + 0x28);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = func_0x0325681c(lVar10);
          }
          lVar16 = *plVar19;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar10) {
                puVar4 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_053c0644;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar19,lVar10,0);
LAB_053c0644:
          param_4 = puVar4[1];
          uVar12 = param_2;
          uVar17 = (*(code *)*puVar4)(plVar19,uVar15);
          if ((uVar17 & 1) != 0) {
            return 1;
          }
          uVar15 = *(undefined8 *)(lVar14 + 0x18);
        }
        if ((int)(uint)uVar15 <= iVar23) goto LAB_053c06ac;
        if ((uint)uVar15 <= uVar22) break;
        uVar22 = *(uint *)(lVar14 + (ulong)uVar22 * 0x10 + 0x24);
        iVar23 = iVar23 + 1;
        if ((int)uVar22 < 0) {
          return 0;
        }
      }
    }
    func_0x03280cb4();
LAB_053c06ac:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar12 = func_0x03280ca0();
    uVar15 = func_0x03280a2c(PTR_DAT_077825d8);
    iVar11 = 0;
    func_0x057963c0(uVar12,uVar15);
    func_0x03280b7c(uVar12,lVar13);
  }
LAB_053c06e8:
  auVar24 = func_0x03280cac();
  lVar9 = auVar24._8_8_;
  uVar17 = auVar24._0_8_;
  iVar2 = *(int *)(uVar17 + 0x20);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 200);
  if (lVar9 == 0) {
LAB_053c2640:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar15 = func_0x03280ca0();
    uVar6 = func_0x03280a2c(PTR_DAT_077776b8);
    lVar9 = 0;
    func_0x056e7310(uVar15,uVar6);
  }
  else {
    if (iVar11 < 0) {
      iStack_a4 = iVar11;
      uVar15 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar9 = func_0x03280b94(uVar15,&iStack_a4);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar15 = func_0x03280ca0();
      puVar7 = PTR_DAT_077776c0;
    }
    else {
      if (-1 < iVar2) {
        if ((iVar11 <= *(int *)(lVar9 + 0x18)) && (iVar2 <= *(int *)(lVar9 + 0x18) - iVar11)) {
          uVar5 = uVar17;
          if ((0 < iVar2) && (iVar23 = *(int *)(uVar17 + 0x24), 0 < iVar23)) {
            lVar13 = 0;
            uVar20 = 0;
            iVar21 = 0;
            do {
              lVar14 = *(long *)(uVar17 + 0x18);
              if (lVar14 == 0) {
LAB_053c263c:
                func_0x03280cac();
                goto LAB_053c2640;
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar20) {
LAB_053c2638:
                func_0x03280cb4();
                goto LAB_053c263c;
              }
              if (-1 < *(int *)(lVar14 + lVar13 + 0x20)) {
                if (*(uint *)(lVar9 + 0x18) <= (uint)(iVar21 + iVar11)) goto LAB_053c2638;
                *(undefined8 *)(lVar9 + (long)(iVar21 + iVar11) * 8 + 0x20) =
                     *(undefined8 *)(lVar14 + lVar13 + 0x28);
                uVar5 = func_0x032809c4();
                iVar23 = *(int *)(uVar17 + 0x24);
                iVar21 = iVar21 + 1;
              }
              if (iVar2 <= iVar21) {
                return uVar5;
              }
              uVar20 = uVar20 + 1;
              lVar13 = lVar13 + 0x10;
            } while ((long)uVar20 < (long)iVar23);
          }
          return uVar5;
        }
        func_0x03280a2c(PTR_DAT_0774e6e8);
        uVar15 = func_0x03280ca0();
        uVar6 = func_0x03280a2c(PTR_DAT_0777b030);
        lVar9 = 0;
        func_0x056ede60(uVar15,uVar6);
        goto LAB_053c2760;
      }
      iStack_a8 = iVar2;
      uVar15 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar9 = func_0x03280b94(uVar15,&iStack_a8);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar15 = func_0x03280ca0();
      puVar7 = PTR_DAT_077598c8;
    }
    uVar6 = func_0x03280a2c(puVar7);
    uVar8 = func_0x03280a2c(PTR_DAT_077825f0);
    func_0x056ebf98(uVar15,uVar6,lVar9,uVar8,0);
  }
LAB_053c2760:
  auVar24 = func_0x03280b7c(uVar15,uVar12);
  lVar14 = auVar24._8_8_;
  lVar13 = auVar24._0_8_;
  if (lVar14 == 0) {
LAB_053c2838:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar12 = func_0x03280ca0();
    uVar15 = func_0x03280a2c(PTR_DAT_07779588);
    func_0x056e7310(uVar12,uVar15,0);
    lVar9 = func_0x03280b7c(uVar12,lVar9);
    return *(ulong *)(lVar9 + 0x30);
  }
  if (*(int *)(lVar13 + 0x24) < 1) {
    uVar22 = 0;
  }
  else {
    lVar10 = 0;
    uVar17 = 0;
    uVar22 = 0;
    do {
      lVar16 = *(long *)(lVar13 + 0x18);
      if (lVar16 == 0) {
        func_0x03280cac();
LAB_053c2834:
        func_0x03280cb4();
        goto LAB_053c2838;
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_053c2834;
      if (-1 < *(int *)(lVar16 + lVar10 + 0x20)) {
        uVar12 = *(undefined8 *)(lVar16 + lVar10 + 0x28);
        uVar5 = (**(code **)(lVar14 + 0x18))
                          (*(undefined8 *)(lVar14 + 0x40),uVar12,*(undefined8 *)(lVar14 + 0x28));
        if ((uVar5 & 1) != 0) {
          uVar3 = func_0x053c0700(lVar13,uVar12,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x148)
                                 );
          uVar22 = uVar22 + (uVar3 & 1);
        }
      }
      uVar17 = uVar17 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((long)uVar17 < (long)*(int *)(lVar13 + 0x24));
  }
  return (ulong)uVar22;
}

