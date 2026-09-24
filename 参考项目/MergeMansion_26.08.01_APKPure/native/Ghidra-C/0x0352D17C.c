/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/BoardInventory.txt
 * Cpp2IL method: System.Boolean AddItemToInventory(GameLogic.Player.IPlayer player, GameLogic.Player.Items.MergeItem itemToAdd, Metaplay.Core.MetaTime currentTime, out System.Boolean removeItemFromBoard)
 * Ghidra function entry: 0362d17c
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x0362d2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0362d328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0362d724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0362d8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0362d728) */
/* WARNING: Removing unreachable block (ram,0x0362d72c) */
/* WARNING: Removing unreachable block (ram,0x0362d754) */
/* WARNING: Removing unreachable block (ram,0x0362d32c) */
/* WARNING: Removing unreachable block (ram,0x0362d348) */
/* WARNING: Removing unreachable block (ram,0x0362d34c) */
/* WARNING: Removing unreachable block (ram,0x0362d368) */
/* WARNING: Removing unreachable block (ram,0x0362d36c) */
/* WARNING: Removing unreachable block (ram,0x0362d388) */
/* WARNING: Removing unreachable block (ram,0x0362d390) */
/* WARNING: Removing unreachable block (ram,0x0362d3c0) */
/* WARNING: Removing unreachable block (ram,0x0362d39c) */
/* WARNING: Removing unreachable block (ram,0x0362d3a8) */
/* WARNING: Removing unreachable block (ram,0x0362d3d0) */
/* WARNING: Removing unreachable block (ram,0x0362d3f0) */
/* WARNING: Removing unreachable block (ram,0x0362d40c) */
/* WARNING: Removing unreachable block (ram,0x0362d414) */
/* WARNING: Removing unreachable block (ram,0x0362d43c) */
/* WARNING: Removing unreachable block (ram,0x0362d420) */
/* WARNING: Removing unreachable block (ram,0x0362d42c) */
/* WARNING: Removing unreachable block (ram,0x0362d44c) */
/* WARNING: Removing unreachable block (ram,0x0362d45c) */
/* WARNING: Removing unreachable block (ram,0x0362d478) */
/* WARNING: Removing unreachable block (ram,0x0362d480) */
/* WARNING: Removing unreachable block (ram,0x0362d4a8) */
/* WARNING: Removing unreachable block (ram,0x0362d48c) */
/* WARNING: Removing unreachable block (ram,0x0362d498) */
/* WARNING: Removing unreachable block (ram,0x0362d4b8) */
/* WARNING: Removing unreachable block (ram,0x0362d4cc) */
/* WARNING: Removing unreachable block (ram,0x0362d4e8) */
/* WARNING: Removing unreachable block (ram,0x0362d4f0) */
/* WARNING: Removing unreachable block (ram,0x0362d518) */
/* WARNING: Removing unreachable block (ram,0x0362d4fc) */
/* WARNING: Removing unreachable block (ram,0x0362d508) */
/* WARNING: Removing unreachable block (ram,0x0362d524) */
/* WARNING: Removing unreachable block (ram,0x0362d538) */
/* WARNING: Removing unreachable block (ram,0x0362d554) */
/* WARNING: Removing unreachable block (ram,0x0362d55c) */
/* WARNING: Removing unreachable block (ram,0x0362d584) */
/* WARNING: Removing unreachable block (ram,0x0362d568) */
/* WARNING: Removing unreachable block (ram,0x0362d574) */
/* WARNING: Removing unreachable block (ram,0x0362d590) */
/* WARNING: Removing unreachable block (ram,0x0362d5bc) */
/* WARNING: Removing unreachable block (ram,0x0362d5c4) */
/* WARNING: Removing unreachable block (ram,0x0362d5d4) */
/* WARNING: Removing unreachable block (ram,0x0362d5f0) */
/* WARNING: Removing unreachable block (ram,0x0362d5f8) */
/* WARNING: Removing unreachable block (ram,0x0362d620) */
/* WARNING: Removing unreachable block (ram,0x0362d604) */
/* WARNING: Removing unreachable block (ram,0x0362d610) */
/* WARNING: Removing unreachable block (ram,0x0362d630) */
/* WARNING: Removing unreachable block (ram,0x0362d658) */
/* WARNING: Removing unreachable block (ram,0x0362d66c) */
/* WARNING: Removing unreachable block (ram,0x0362d684) */
/* WARNING: Removing unreachable block (ram,0x0362d690) */
/* WARNING: Removing unreachable block (ram,0x0362d698) */
/* WARNING: Removing unreachable block (ram,0x0362d6c0) */
/* WARNING: Removing unreachable block (ram,0x0362d6a4) */
/* WARNING: Removing unreachable block (ram,0x0362d6b0) */
/* WARNING: Removing unreachable block (ram,0x0362d6d0) */
/* WARNING: Removing unreachable block (ram,0x0362d6ec) */
/* WARNING: Removing unreachable block (ram,0x0362d76c) */
/* WARNING: Removing unreachable block (ram,0x0362d774) */
/* WARNING: Removing unreachable block (ram,0x0362d700) */
/* WARNING: Removing unreachable block (ram,0x0362d708) */
/* WARNING: Removing unreachable block (ram,0x0362d2ac) */
/* WARNING: Removing unreachable block (ram,0x0362d3b8) */
/* WARNING: Removing unreachable block (ram,0x0362d79c) */
/* WARNING: Removing unreachable block (ram,0x0362d2b4) */
/* WARNING: Removing unreachable block (ram,0x0362d7c0) */
/* WARNING: Removing unreachable block (ram,0x0362d7c4) */
/* WARNING: Removing unreachable block (ram,0x0362d2c4) */
/* WARNING: Removing unreachable block (ram,0x0362d304) */
/* WARNING: Removing unreachable block (ram,0x0362d30c) */
/* WARNING: Removing unreachable block (ram,0x0362d8c0) */
/* WARNING: Removing unreachable block (ram,0x0362d8dc) */
/* WARNING: Removing unreachable block (ram,0x0362d8e0) */
/* WARNING: Removing unreachable block (ram,0x0362d8fc) */
/* WARNING: Removing unreachable block (ram,0x0362d900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0362d17c(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  long alStack_158 [3];
  long *plStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  uVar4 = func_0x03530bf4(param_4,0);
  if ((bRam0000000005e2d4dc & 1) == 0) {
    func_0x0249f8e4(&DAT_059df2a8);
    func_0x0249f8e4(&DAT_059df2c0);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfba8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059eb1e8);
    func_0x0249f8e4(&DAT_05a1d808);
    func_0x0249f8e4(&DAT_059e2700);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a29a80);
    func_0x0249f8e4(&DAT_059d4060);
    bRam0000000005e2d4dc = 1;
  }
  plVar9 = param_2;
  if ((bRam0000000005e2d4f5 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e0220);
    func_0x0249f8e4(&DAT_05a29a88);
    func_0x0249f8e4(&DAT_059d4060);
    bRam0000000005e2d4f5 = 1;
  }
  iVar3 = func_0x0362cd28(param_1);
  if (iVar3 != *(int *)(param_1 + 0x10)) {
    return 1;
  }
  if (param_2 == (long *)0x0) {
    uVar14 = 0x362d93c;
    auVar15 = func_0x0249fb90();
  }
  else {
    lVar11 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == _DAT_059e0220) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
          goto LAB_0362d8a0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0xc);
LAB_0362d8a0:
    uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
    uVar14 = 0x362d8c0;
    plVar9 = param_3;
  }
  plVar10 = auVar15._8_8_;
  uStack_110 = uVar14;
  if ((bRam0000000005e2d4f6 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a05960);
    func_0x0249f8e4(&DAT_05a05968);
    func_0x0249f8e4(&DAT_05a05970);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_05a1d818);
    func_0x0249f8e4(&DAT_05a29a78);
    func_0x0249f8e4(&DAT_059d4060);
    bRam0000000005e2d4f6 = 1;
  }
  lStack_130 = 0;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  if (plVar9 != (long *)0x0) {
    uVar12 = func_0x036e15dc(plVar9,plVar10,0);
    if (((uVar12 & 1) == 0) || (iVar3 = func_0x036e1788(plVar9,plVar10,0), iVar3 < 1))
    goto LAB_0362dc3c;
    if (plVar10 != (long *)0x0) {
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == _DAT_059df8e8) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
            goto LAB_0362da60;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059df8e8,5);
LAB_0362da60:
      uVar14 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      uVar12 = func_0x036eb4a0(plVar9,uVar14,0);
      if ((uVar12 & 1) == 0) goto LAB_0362dc3c;
      lVar11 = *(long *)(auVar15._0_8_ + 0x18);
      if (lVar11 != 0) {
        func_0x028310e8(lVar11,alStack_158 + 2,_DAT_05a1d818);
        plStack_128 = plStack_140;
        lStack_130 = alStack_158[2];
        uStack_120 = uStack_138;
        alStack_158[2] = 0;
        plStack_140 = &lStack_130;
        while( true ) {
          uVar12 = func_0x02a5d2d0(&lStack_130,_DAT_05a05968);
          lVar11 = _DAT_05a05970;
          if ((uVar12 & 1) == 0) {
            func_0x02a5d2cc(&lStack_130,_DAT_05a05960);
            goto LAB_0362dc3c;
          }
          lVar6 = *(long *)(_DAT_05a05970 + 0x20);
          uVar2 = *(ushort *)(lVar6 + 0x135);
          lVar7 = lVar6;
          if ((uVar2 & 1) == 0) {
            lVar7 = func_0x024d8f40();
            lVar6 = *(long *)(lVar11 + 0x20);
            uVar2 = *(ushort *)(lVar6 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar6 = func_0x024d8f40();
          }
          uVar14 = func_0x0249f90c(&lStack_130,
                                   *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) + 0x60);
          func_0x054ed0d0(alStack_158,uVar14,uVar1);
          lVar11 = alStack_158[0];
          if (alStack_158[0] == 0) break;
          if (*(long *)(alStack_158[0] + 0x10) == 0) goto LAB_0362dc88;
          uVar12 = func_0x036e15dc(*(long *)(alStack_158[0] + 0x10),plVar10,0);
          if ((uVar12 & 1) != 0) {
            lVar7 = *plVar10;
            uVar14 = *(undefined8 *)(lVar11 + 0x10);
            uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == _DAT_059df8e8) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                  goto LAB_0362dbb4;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)func_0x024d927c(plVar10,_DAT_059df8e8,5);
LAB_0362dbb4:
            uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
            uVar12 = func_0x036eb4a0(uVar14,uVar8,0);
            if (((uVar12 & 1) != 0) &&
               (uVar12 = func_0x036d9f40(plVar9,plVar10,*(undefined8 *)(lVar11 + 0x10),uVar4,0),
               (uVar12 & 1) != 0)) {
              alStack_158[0] = 0;
              alStack_158[1] = 0;
              func_0x0288eb6c(alStack_158,lVar11,_DAT_05a29a78);
              lVar11 = alStack_158[0];
              func_0x02a5d2cc(&lStack_130,_DAT_05a05960);
              return lVar11;
            }
          }
        }
        func_0x0249fb90();
LAB_0362dc88:
        func_0x0249fb90();
      }
    }
  }
  auVar16 = func_0x0249fb90();
  uVar4 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    plVar9 = (long *)func_0x054ed080(uVar4);
    lVar11 = *plVar9;
    alStack_158[2] = lVar11;
    func_0x054ed090();
    func_0x02a5d2cc(plStack_140,_DAT_05a05960);
    if (lVar11 == 0) {
LAB_0362dc3c:
      if (*(int *)(_DAT_059d4060 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      return **(undefined8 **)(_DAT_059d4060 + 0xb8);
    }
    uVar4 = func_0x0249fb88(lVar11);
  }
  func_0x0240b498(alStack_158 + 2);
  func_0x0258f7ac(uVar4);
  uVar4 = func_0x022bd790();
  return uVar4;
}

