/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/BoardInventory.txt
 * Cpp2IL method: System.Boolean AddItemToInventory(GameLogic.Player.IPlayer player, GameLogic.Player.Items.MergeItem itemToAdd, GameLogic.Config.Types.MetacoreTime currentTime, out System.Boolean removeItemFromBoard)
 * Ghidra function entry: 0362d1c8
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

undefined8 FUN_0362d1c8(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  long alStack_158 [3];
  long *plStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
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
  plVar8 = param_2;
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
    uVar13 = 0x362d93c;
    auVar14 = func_0x0249fb90();
  }
  else {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _DAT_059e0220) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
          goto LAB_0362d8a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)func_0x024d927c(param_2,_DAT_059e0220,0xc);
LAB_0362d8a0:
    param_4 = (*(code *)*puVar4)(param_2,puVar4[1]);
    uVar13 = 0x362d8c0;
    plVar8 = param_3;
  }
  plVar9 = auVar14._8_8_;
  uStack_110 = uVar13;
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
  if (plVar8 != (long *)0x0) {
    uVar11 = func_0x036e15dc(plVar8,plVar9,0);
    if (((uVar11 & 1) == 0) || (iVar3 = func_0x036e1788(plVar8,plVar9,0), iVar3 < 1))
    goto LAB_0362dc3c;
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _DAT_059df8e8) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_0362da60;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df8e8,5);
LAB_0362da60:
      uVar13 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      uVar11 = func_0x036eb4a0(plVar8,uVar13,0);
      if ((uVar11 & 1) == 0) goto LAB_0362dc3c;
      lVar10 = *(long *)(auVar14._0_8_ + 0x18);
      if (lVar10 != 0) {
        func_0x028310e8(lVar10,alStack_158 + 2,_DAT_05a1d818);
        plStack_128 = plStack_140;
        lStack_130 = alStack_158[2];
        uStack_120 = uStack_138;
        alStack_158[2] = 0;
        plStack_140 = &lStack_130;
        while( true ) {
          uVar11 = func_0x02a5d2d0(&lStack_130,_DAT_05a05968);
          lVar10 = _DAT_05a05970;
          if ((uVar11 & 1) == 0) {
            func_0x02a5d2cc(&lStack_130,_DAT_05a05960);
            goto LAB_0362dc3c;
          }
          lVar5 = *(long *)(_DAT_05a05970 + 0x20);
          uVar2 = *(ushort *)(lVar5 + 0x135);
          lVar6 = lVar5;
          if ((uVar2 & 1) == 0) {
            lVar6 = func_0x024d8f40();
            lVar5 = *(long *)(lVar10 + 0x20);
            uVar2 = *(ushort *)(lVar5 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar5 = func_0x024d8f40();
          }
          uVar13 = func_0x0249f90c(&lStack_130,
                                   *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x60);
          func_0x054ed0d0(alStack_158,uVar13,uVar1);
          lVar10 = alStack_158[0];
          if (alStack_158[0] == 0) break;
          if (*(long *)(alStack_158[0] + 0x10) == 0) goto LAB_0362dc88;
          uVar11 = func_0x036e15dc(*(long *)(alStack_158[0] + 0x10),plVar9,0);
          if ((uVar11 & 1) != 0) {
            lVar6 = *plVar9;
            uVar13 = *(undefined8 *)(lVar10 + 0x10);
            uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == _DAT_059df8e8) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                  goto LAB_0362dbb4;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)func_0x024d927c(plVar9,_DAT_059df8e8,5);
LAB_0362dbb4:
            uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
            uVar11 = func_0x036eb4a0(uVar13,uVar7,0);
            if (((uVar11 & 1) != 0) &&
               (uVar11 = func_0x036d9f40(plVar8,plVar9,*(undefined8 *)(lVar10 + 0x10),param_4,0),
               (uVar11 & 1) != 0)) {
              alStack_158[0] = 0;
              alStack_158[1] = 0;
              func_0x0288eb6c(alStack_158,lVar10,_DAT_05a29a78);
              lVar10 = alStack_158[0];
              func_0x02a5d2cc(&lStack_130,_DAT_05a05960);
              return lVar10;
            }
          }
        }
        func_0x0249fb90();
LAB_0362dc88:
        func_0x0249fb90();
      }
    }
  }
  auVar15 = func_0x0249fb90();
  uVar13 = auVar15._0_8_;
  if (auVar15._8_4_ == 1) {
    plVar8 = (long *)func_0x054ed080(uVar13);
    lVar10 = *plVar8;
    alStack_158[2] = lVar10;
    func_0x054ed090();
    func_0x02a5d2cc(plStack_140,_DAT_05a05960);
    if (lVar10 == 0) {
LAB_0362dc3c:
      if (*(int *)(_DAT_059d4060 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      return **(undefined8 **)(_DAT_059d4060 + 0xb8);
    }
    uVar13 = func_0x0249fb88(lVar10);
  }
  func_0x0240b498(alStack_158 + 2);
  func_0x0258f7ac(uVar13);
  uVar13 = func_0x022bd790();
  return uVar13;
}

