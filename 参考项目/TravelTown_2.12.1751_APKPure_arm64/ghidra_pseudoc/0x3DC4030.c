/* Ghidra 12.1.2 native pseudocode; RVA 0x3DC4030; ContextualizedECS.Context.TickArgs.AddArguments<__Il2CppFullySharedGenericType>; status ok */


/* WARNING: Type propagation algorithm not settling */

ulong ContextualizedECS_Context_TickArgs__AddArguments___Il2CppFullySharedGenericType_
                (ulong param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long alStack_180 [5];
  long alStack_158 [4];
  long alStack_138 [4];
  long alStack_118 [4];
  long lStack_f8;
  undefined1 auStack_f0 [24];
  undefined8 auStack_d8 [3];
  undefined1 auStack_c0 [24];
  ulong auStack_a8 [5];
  undefined8 *apuStack_80 [2];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar9 = tpidr_el0;
  lStack_68 = *(long *)(lVar9 + 0x28);
  plVar16 = *(long **)(param_3 + 0x38);
  if (plVar16 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar16 = *(long **)(param_3 + 0x38);
    if (plVar16 == (long *)0x0) {
      func_0x03256878(param_3);
      plVar16 = *(long **)(param_3 + 0x38);
    }
  }
  uVar13 = (ulong)*(uint *)(plVar16[4] + 0xfc);
  uVar10 = uVar13 + 0xf & 0x1fffffff0;
  lVar8 = (long)apuStack_80 - uVar10;
  puVar14 = (undefined8 *)(lVar8 - uVar10);
  lVar15 = (long)puVar14 - uVar10;
  func_0x072ce9a0(lVar15,0,uVar13);
  if (param_2 == (long *)0x0) {
    func_0x03280cac();
    plVar16 = (long *)0x0;
  }
  else {
    lVar6 = *plVar16;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c(lVar6);
    }
    lVar7 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,lVar6,0);
LAB_03ec4144:
    plVar16 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    puVar2 = PTR_DAT_0774e8e0;
    if (plVar16 != (long *)0x0) {
      do {
        lVar6 = *plVar16;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar2,0);
LAB_03ec41ac:
        uVar10 = (*(code *)*puVar3)(plVar16,puVar3[1]);
        if ((uVar10 & 1) == 0) {
          param_3 = 0;
          goto LAB_03ec429c;
        }
        lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c(lVar6);
        }
        lVar7 = *plVar16;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar6) {
              lVar6 = lVar7 + (long)*piVar11 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        lVar6 = func_0x03256b10(plVar16,lVar6,0);
LAB_03ec4220:
        lVar6 = *(long *)(lVar6 + 8);
        apuStack_80[1] = (undefined8 *)lVar8;
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar16,apuStack_80 + 1,lVar8);
        func_0x072ce970(lVar15,lVar8,uVar13);
        func_0x072ce970(puVar14,lVar15,uVar13);
        apuStack_80[1] = puVar14;
        if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x20) + 0x28)) {
          apuStack_80[1] = (undefined8 *)*puVar14;
        }
        puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x28);
        (*(code *)puVar3[2])(*puVar3,puVar3,param_1,apuStack_80 + 1,auStack_70);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(param_3);
  do {
    auVar19 = func_0x072ce990();
    if (auVar19._8_4_ != 1) {
      if (plVar16 == (long *)0x0) goto LAB_03ec43e8;
      lVar9 = *plVar16;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_03ec43c0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    plVar4 = (long *)func_0x072ce910(auVar19._0_8_);
    param_3 = *plVar4;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar16 != (long *)0x0) {
      lVar8 = *plVar16;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar14 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar14)(plVar16,puVar14[1]);
    }
    if (param_3 != 0) goto LAB_03ec4340;
    if (*(long *)(lVar9 + 0x28) == lStack_68) {
      return param_1;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar14 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar14)(plVar16,puVar14[1]);
LAB_03ec43e8:
  func_0x03365958(auVar19._0_8_);
  func_0x03280ca4(0);
  auVar17 = func_0x02f09514();
  lVar9 = auVar17._8_8_;
  *(undefined8 *)(lVar15 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar15 + -0x18) = 0;
  *(long **)(lVar15 + -0x10) = plVar16;
  *(ulong *)(lVar15 + -8) = param_1;
  puVar14 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar9 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar9);
      puVar14 = *(undefined8 **)(lVar9 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x28) = 0;
  uVar12 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar12,0);
  lVar8 = *(long *)(auVar17._0_8_ + 0x10);
  if (lVar8 != 0) {
    uVar10 = func_0x04fe48b0(lVar8,uVar5,lVar15 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar10 & 1) == 0) {
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      lVar9 = *(long *)(lVar8 + 0x38);
      if (lVar9 == 0) {
        func_0x03256878(lVar8);
        lVar9 = *(long *)(lVar8 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = func_0x0325681c();
      }
      uVar10 = **(ulong **)(lVar9 + 0xb8);
    }
    else {
      uVar10 = func_0x03d2c6a8(*(undefined8 *)(lVar15 + -0x28),
                               *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    }
    return uVar10;
  }
  auVar18 = func_0x03280cac();
  lVar9 = auVar18._8_8_;
  *(undefined8 *)(lVar15 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar15 + -0x48) = uVar12;
  *(undefined1 (*) [16])(lVar15 + -0x40) = auVar17;
  puVar14 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar9 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar9);
      puVar14 = *(undefined8 **)(lVar9 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x58) = 0;
  uVar12 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar12 = func_0x057a51c4(uVar12,0);
  lVar8 = *(long *)(auVar18._0_8_ + 0x10);
  if (lVar8 != 0) {
    uVar10 = func_0x04fe48b0(lVar8,uVar12,lVar15 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar10 & 1) == 0) {
      uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 8))();
    }
    else {
      uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar15 + -0x58));
    }
    return uVar10;
  }
  auVar17 = func_0x03280cac();
  lVar9 = auVar17._8_8_;
  *(undefined8 *)(lVar15 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar15 + -0x70) = auVar18;
  puVar14 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar9 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar9);
      puVar14 = *(undefined8 **)(lVar9 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x78) = 0;
  uVar12 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar12,0);
  lVar9 = *(long *)(auVar17._0_8_ + 0x10);
  if (lVar9 != 0) {
    uVar10 = func_0x04fe48b0(lVar9,uVar5,lVar15 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    lVar9 = *(long *)(lVar15 + -0x78);
    if (lVar9 != 0) {
      iVar1 = *(int *)(lVar9 + 0x18);
      if (iVar1 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
      return 1;
    }
  }
  auVar18 = func_0x03280cac();
  lVar9 = auVar18._8_8_;
  *(undefined8 *)(lVar15 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar15 + -0x90) = uVar12;
  *(long *)(lVar15 + -0x88) = auVar17._0_8_;
  puVar14 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar9 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar9);
      puVar14 = *(undefined8 **)(lVar9 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0x98) = 0;
  uVar12 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar12,0);
  lVar9 = *(long *)(auVar18._0_8_ + 0x10);
  if (lVar9 != 0) {
    uVar10 = func_0x04fe48b0(lVar9,uVar5,lVar15 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar15 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar15 + -0x98) + 0x18));
    }
  }
  auVar17 = func_0x03280cac();
  lVar9 = auVar17._8_8_;
  *(undefined8 *)(lVar15 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar15 + -0xb0) = uVar12;
  *(long *)(lVar15 + -0xa8) = auVar18._0_8_;
  puVar14 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar9 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar9);
      puVar14 = *(undefined8 **)(lVar9 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0xb8) = 0;
  uVar12 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar12,0);
  lVar9 = *(long *)(auVar17._0_8_ + 0x10);
  if (lVar9 != 0) {
    uVar10 = func_0x04fe48b0(lVar9,uVar5,lVar15 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar15 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar15 + -0xb8) + 0x18));
    }
  }
  auVar18 = func_0x03280cac();
  lVar9 = auVar18._8_8_;
  *(undefined8 *)(lVar15 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar15 + -0xd0) = uVar12;
  *(long *)(lVar15 + -200) = auVar17._0_8_;
  puVar14 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar14 = *(undefined8 **)(lVar9 + 0x38);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x03256878(lVar9);
      puVar14 = *(undefined8 **)(lVar9 + 0x38);
    }
  }
  *(undefined8 *)(lVar15 + -0xd8) = 0;
  uVar12 = *puVar14;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = func_0x057a51c4(uVar12,0);
  lVar9 = *(long *)(auVar18._0_8_ + 0x10);
  if (lVar9 != 0) {
    uVar10 = func_0x04fe48b0(lVar9,uVar5,lVar15 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar10 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      if (*(long *)(lVar15 + -0xd8) == 0) goto LAB_03ec4958;
      uVar10 = (ulong)(0 < *(int *)(*(long *)(lVar15 + -0xd8) + 0x18));
    }
    return uVar10;
  }
LAB_03ec4958:
  auVar17 = func_0x03280cac();
  lVar9 = auVar17._8_8_;
  *(undefined8 *)(lVar15 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar15 + -0xf0) = uVar12;
  *(long *)(lVar15 + -0xe8) = auVar18._0_8_;
  puVar14 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x03256878(lVar9);
    puVar14 = *(undefined8 **)(lVar9 + 0x38);
  }
  uVar10 = (**(code **)*puVar14)(auVar17._0_8_);
  if ((uVar10 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x38) + 8))(auVar17._0_8_);
  return uVar10;
}

