/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: System.Int32 ConsumeDecayCycle()
 * Ghidra function entry: 036e68a8
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_036e68a8(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = func_0x036d5e58();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xa0) != 0)) {
    func_0x03706584(*(long *)(lVar1 + 0xa0),0);
    lVar1 = func_0x036d5e58(param_1);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0xa0) != 0)) {
      return (ulong)*(uint *)(*(long *)(lVar1 + 0xa0) + 0x14);
    }
  }
  auVar9 = func_0x0249fb90();
  plVar4 = auVar9._8_8_;
  if ((bRam0000000005e2da71 & 1) == 0) {
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0740);
    bRam0000000005e2da71 = 1;
  }
  lVar1 = *(long *)(auVar9._0_8_ + 0x20);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) {
    return 0;
  }
  if (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _DAT_059df8e8) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_036e69b0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059df8e8,5);
LAB_036e69b0:
    uVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    plVar4 = *(long **)(auVar9._0_8_ + 0x10);
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))
                                   (plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x1d0)),
       plVar4 != (long *)0x0)) {
      lVar1 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _DAT_059dfbc0) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
            goto LAB_036e6a38;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059dfbc0,0x14);
LAB_036e6a38:
      plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
      if (plVar4 != (long *)0x0) {
        lVar1 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _DAT_059e0740) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_036e6aa0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)func_0x024d927c(plVar4,_DAT_059e0740,0);
LAB_036e6aa0:
                    /* WARNING: Could not recover jumptable at 0x036e6ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)*puVar2)(plVar4,puVar2[1]);
        return uVar6;
      }
    }
  }
  auVar9 = func_0x0249fb90();
  lVar1 = auVar9._8_8_;
  uStack_60 = 0x36e6ab8;
  uVar6 = auVar9._0_8_;
  if ((bRam0000000005e2da72 & 1) == 0) {
    func_0x0249f8e4(&DAT_05a17d88);
    func_0x0249f8e4(&DAT_05a17d90);
    uVar6 = func_0x0249f8e4(&DAT_05a17d98);
    bRam0000000005e2da72 = 1;
  }
  lVar5 = *(long *)(auVar9._0_8_ + 0x20);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x78), lVar5 != 0)) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
LAB_036e6b9c:
      puVar2 = (undefined8 *)func_0x0249fb90();
      uStack_80 = 0x36e6ba0;
      uStack_98 = puVar2[1];
      uStack_a0 = *puVar2;
      uStack_90 = puVar2[2];
      uVar6 = func_0x03516c68(&uStack_a0,0);
      return uVar6;
    }
    iVar8 = *(int *)(lVar5 + 0x18);
    if (-1 < iVar8 + -1) {
      do {
        iVar8 = iVar8 + -1;
        func_0x0282f3c4(lVar5,iVar8,&uStack_68,_DAT_05a17d98);
        if (lVar1 == 0) goto LAB_036e6b9c;
        uVar6 = (**(code **)(lVar1 + 0x18))
                          (*(undefined8 *)(lVar1 + 0x40),uStack_68,*(undefined8 *)(lVar1 + 0x28));
        if ((uVar6 & 1) != 0) {
          uVar6 = func_0x02832544(lVar5,iVar8,_DAT_05a17d88);
        }
      } while (0 < iVar8);
    }
  }
  return uVar6;
}

