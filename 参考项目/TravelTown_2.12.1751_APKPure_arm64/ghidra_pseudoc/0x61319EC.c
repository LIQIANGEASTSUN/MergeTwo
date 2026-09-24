/* Ghidra 12.1.2 native pseudocode; RVA 0x61319EC; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.FindNotExpiredNextItem; status ok */

/* WARNING: Possible PIC construction at 0x06231e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06231e38) */
/* WARNING: Removing unreachable block (ram,0x06231e60) */

ulong MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__FindNotExpiredNextItem
                (long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 auVar23 [16];
  long lStack_b0;
  long alStack_a8 [2];
  undefined *puStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_0774ecc0;
  puVar20 = PTR_DAT_0774ecb8;
  uVar18 = 0x7e24000;
  param_3 = param_3 & 0xffffffff;
  if ((bRam0000000007e2450f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f358);
    func_0x03280a18(PTR_DAT_077da950);
    func_0x03280a18(PTR_DAT_0774ecc8);
    func_0x03280a18(PTR_DAT_07750fa0);
    func_0x03280a18(PTR_DAT_0774ecc0);
    func_0x03280a18(PTR_DAT_0774ecb8);
    func_0x03280a18(PTR_DAT_077da880);
    func_0x03280a18(PTR_DAT_077da958);
    func_0x03280a18(PTR_DAT_077da8a8);
    func_0x03280a18(PTR_DAT_077da8c0);
    bRam0000000007e2450f = 1;
  }
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar20);
  func_0x04143c38(lVar11,*(undefined8 *)puVar6);
  puVar6 = PTR_DAT_077da950;
  if (param_2 != 0) {
    uVar12 = func_0x03e0c264(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_077da950);
    puVar8 = PTR_DAT_077da958;
    puVar7 = PTR_DAT_0774ecc8;
    puVar20 = puVar6;
    if ((uVar12 & 1) == 0) {
      do {
        if (*(long *)(param_2 + 0x18) == 0) goto LAB_06231c54;
        uVar18 = func_0x044a32f8(*(long *)(param_2 + 0x18),*(undefined8 *)puVar8);
        if ((uVar18 != 0) &&
           (lVar22 = *(long *)(uVar18 + 0x18), lVar19 = func_0x0622fba4(param_1), lVar22 < lVar19))
        {
          if (lVar11 == 0) goto LAB_06231c54;
          uVar21 = *(undefined8 *)(uVar18 + 0x10);
          lVar19 = *(long *)(lVar11 + 0x10);
          lVar22 = *(long *)puVar7;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_06231c54;
          uVar4 = *(uint *)(lVar11 + 0x18);
          if (uVar4 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar4 + 1;
            *(undefined8 *)(lVar19 + (long)(int)uVar4 * 8 + 0x20) = uVar21;
            func_0x032809c4();
          }
          else {
            func_0x0414446c(lVar11,uVar21,
                            *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = 0;
        }
        uVar12 = func_0x03e0c264(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)puVar6);
      } while ((uVar18 == 0) && ((uVar12 & 1) == 0));
    }
    else {
      uVar18 = 0;
    }
    uVar12 = func_0x03d281a8(lVar11,*(undefined8 *)PTR_DAT_0774f358);
    if ((uVar12 & 1) == 0) {
LAB_06231c2c:
      func_0x0623049c(param_1);
      return uVar18;
    }
    if (lVar11 != 0) {
      lVar19 = *(long *)(param_1 + 0x20);
      uVar21 = *(undefined8 *)(param_2 + 0x10);
      lVar11 = func_0x04146128(lVar11,*(undefined8 *)PTR_DAT_07750fa0);
      param_2 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da880);
      func_0x068c4904(param_2,uVar21,param_4,param_3,lVar11,*(undefined8 *)PTR_DAT_077da8c0,0);
      puVar20 = (undefined *)0x0;
      if (lVar19 != 0) {
        func_0x03ea4d6c(lVar19,param_2,*(undefined8 *)PTR_DAT_077da8a8);
        goto LAB_06231c2c;
      }
    }
  }
LAB_06231c54:
  auVar23 = func_0x03280cac();
  lVar22 = auVar23._8_8_;
  lVar19 = auVar23._0_8_;
  alStack_a8[1] = 0x6231c58;
  puStack_98 = puVar20;
  uStack_90 = uVar18;
  lStack_88 = lVar11;
  lStack_80 = param_2;
  uStack_78 = param_4;
  uStack_70 = param_3;
  lStack_68 = param_1;
  if ((bRam0000000007e24510 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_077da900);
    func_0x03280a18(PTR_DAT_077da908);
    func_0x03280a18(PTR_DAT_077da960);
    func_0x03280a18(PTR_DAT_077da800);
    func_0x03280a18(PTR_DAT_077da808);
    func_0x03280a18(PTR_DAT_077da968);
    func_0x03280a18(PTR_DAT_077da970);
    func_0x03280a18(PTR_DAT_0774ecc8);
    func_0x03280a18(PTR_DAT_07763de8);
    func_0x03280a18(PTR_DAT_077da978);
    func_0x03280a18(PTR_DAT_077da910);
    func_0x03280a18(PTR_DAT_077da890);
    func_0x03280a18(PTR_DAT_077da980);
    func_0x03280a18(PTR_DAT_077da988);
    func_0x03280a18(PTR_DAT_077da990);
    func_0x03280a18(PTR_DAT_077da998);
    func_0x03280a18(PTR_DAT_077da9a0);
    func_0x03280a18(PTR_DAT_077da9a8);
    func_0x03280a18(PTR_DAT_07756328);
    func_0x03280a18(PTR_DAT_077503b8);
    bRam0000000007e24510 = 1;
  }
  lStack_b0 = 0;
  alStack_a8[0] = 0;
  if (lVar22 == 0) {
    uVar18 = func_0x055f7aac(0,0);
    if ((uVar18 & 1) == 0) goto LAB_06232194;
  }
  else {
    uVar18 = func_0x055f7aac(*(undefined8 *)(lVar22 + 0x10),0);
    if ((uVar18 & 1) == 0) {
      if (*(long *)(lVar19 + 0x48) == 0) goto LAB_06232194;
      uVar18 = func_0x04fe48b0(*(long *)(lVar19 + 0x48),*(undefined8 *)(lVar22 + 0x10),alStack_a8,
                               *(undefined8 *)PTR_DAT_077da908);
      if ((uVar18 & 1) == 0) {
        lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da970);
        func_0x04f34d5c(lVar11,*(undefined8 *)PTR_DAT_077da960);
        func_0x06232354(lVar19,*(undefined8 *)(lVar22 + 0x10),lVar11,lVar22);
        if ((*(long *)(lVar19 + 0x48) == 0) ||
           (func_0x04fe2d68(*(long *)(lVar19 + 0x48),*(undefined8 *)(lVar22 + 0x10),lVar11,
                            *(undefined8 *)PTR_DAT_077da968), lVar11 == 0)) goto LAB_06232194;
        uVar2 = *(undefined4 *)(lVar22 + 0x28);
LAB_0623205c:
        lVar11 = func_0x04f35ab8(lVar11,uVar2,*(undefined8 *)PTR_DAT_077da800);
        if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) goto LAB_06232194;
      }
      else {
        if (alStack_a8[0] == 0) {
          lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da970);
          func_0x04f34d5c(lVar11,*(undefined8 *)PTR_DAT_077da960);
          alStack_a8[0] = lVar11;
          if (lVar11 == 0) goto LAB_06232194;
        }
        uVar18 = func_0x04f37608(alStack_a8[0],*(undefined4 *)(lVar22 + 0x28),&lStack_b0,
                                 *(undefined8 *)PTR_DAT_077da900);
        if ((uVar18 & 1) == 0) {
          func_0x06232354(lVar19,*(undefined8 *)(lVar22 + 0x10),alStack_a8[0],lVar22);
          if ((*(long *)(lVar19 + 0x48) == 0) ||
             (lVar11 = func_0x04fe2cfc(*(long *)(lVar19 + 0x48),*(undefined8 *)(lVar22 + 0x10),
                                       *(undefined8 *)PTR_DAT_077da808), lVar11 == 0))
          goto LAB_06232194;
          uVar2 = *(undefined4 *)(lVar22 + 0x28);
          goto LAB_0623205c;
        }
        if (lStack_b0 == 0) {
          uVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da988);
          return uVar18;
        }
        uVar18 = func_0x055f7aac(*(undefined8 *)(lVar22 + 0x18),0);
        if ((uVar18 & 1) == 0) {
          if (lStack_b0 == 0) goto LAB_06232194;
          uVar18 = func_0x055f7aac(*(undefined8 *)(lStack_b0 + 0x10),0);
          if ((uVar18 & 1) == 0) {
            if ((lStack_b0 == 0) || (*(long *)(lStack_b0 + 0x10) == 0)) goto LAB_06232194;
            uVar18 = func_0x055f6a38(*(long *)(lStack_b0 + 0x10),*(undefined8 *)(lVar22 + 0x18),0);
            if ((uVar18 & 1) != 0) goto LAB_06231edc;
          }
          if (*(long *)(lVar19 + 0x50) == 0) goto LAB_06232194;
          uVar18 = func_0x041447fc(*(long *)(lVar19 + 0x50),*(undefined8 *)(lVar22 + 0x18),
                                   *(undefined8 *)PTR_DAT_07763de8);
          if ((uVar18 & 1) != 0) goto LAB_06231edc;
          if (lStack_b0 == 0) goto LAB_06232194;
          *(undefined8 *)(lStack_b0 + 0x10) = *(undefined8 *)(lVar22 + 0x18);
          func_0x032809c4();
          lVar11 = *(long *)(lVar19 + 0x50);
          if (lVar11 == 0) goto LAB_06232194;
          uVar21 = *(undefined8 *)(lVar22 + 0x18);
          lVar15 = *(long *)(lVar11 + 0x10);
          lVar17 = *(long *)PTR_DAT_0774ecc8;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_06232194;
          uVar4 = *(uint *)(lVar11 + 0x18);
          if (uVar4 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar4 + 1;
            puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar4 * 8 + 0x20);
            *puVar16 = uVar21;
            func_0x032809c4(puVar16);
          }
          else {
            func_0x0414446c(lVar11,uVar21,
                            *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          if (lStack_b0 == 0) goto LAB_06232194;
          uVar18 = func_0x062321a0(lVar19,*(undefined8 *)(lVar22 + 0x10),
                                   *(undefined4 *)(lVar22 + 0x28),*(undefined8 *)(lStack_b0 + 0x10),
                                   *(undefined8 *)(lStack_b0 + 0x18),*(undefined8 *)(lVar22 + 0x20),
                                   *(undefined8 *)(lVar22 + 0x30));
          bVar5 = true;
        }
        else {
LAB_06231edc:
          bVar5 = false;
        }
        if ((lStack_b0 == 0) || (lVar11 = *(long *)(lStack_b0 + 0x18), lVar11 == 0))
        goto LAB_06232194;
        if (!bVar5) {
          return uVar18;
        }
      }
      uVar2 = *(undefined4 *)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar19 + 0x20);
      uVar3 = *(undefined4 *)(lVar22 + 0x28);
      uVar21 = *(undefined8 *)(lVar22 + 0x10);
      uVar1 = *(undefined8 *)(lVar22 + 0x18);
      uVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da980);
      func_0x068c4988(uVar14,uVar21,uVar3,uVar1,uVar2,0);
      if (lVar11 != 0) {
        func_0x03ea4d6c(lVar11,uVar14,*(undefined8 *)PTR_DAT_077da990);
        uVar18 = func_0x0623049c(lVar19);
        return uVar18;
      }
      goto LAB_06232194;
    }
  }
  plVar13 = (long *)func_0x057dadc4(lVar19,0);
  puVar10 = PTR_DAT_077da9a8;
  puVar9 = PTR_DAT_077da9a0;
  puVar8 = PTR_DAT_077da998;
  puVar7 = PTR_DAT_0776dcd8;
  puVar6 = PTR_DAT_07756328;
  puVar20 = PTR_DAT_077503b8;
  if (plVar13 != (long *)0x0) {
    uVar21 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
    uVar21 = func_0x055f7538(*(undefined8 *)puVar6,uVar21,*(undefined8 *)puVar9,0);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar7);
    }
    uVar18 = func_0x0556c434(uVar21,*(undefined8 *)puVar20,0,*(undefined8 *)puVar8,
                             *(undefined8 *)puVar10,0,0);
    return uVar18;
  }
LAB_06232194:
  uVar18 = func_0x03280cac();
  return uVar18;
}

