/* Ghidra 12.1.2 native pseudocode; RVA 0x6785BC0; MergeEngine.ECS.Systems.Board.SplitSystem.Split; status ok */


/* WARNING: Possible PIC construction at 0x06885df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06885ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06885eb4) */
/* WARNING: Removing unreachable block (ram,0x06885e30) */
/* WARNING: Removing unreachable block (ram,0x06885e38) */
/* WARNING: Removing unreachable block (ram,0x06885e54) */
/* WARNING: Removing unreachable block (ram,0x06885e5c) */
/* WARNING: Removing unreachable block (ram,0x06885e84) */
/* WARNING: Removing unreachable block (ram,0x06885e68) */
/* WARNING: Removing unreachable block (ram,0x06885e74) */
/* WARNING: Removing unreachable block (ram,0x06885e94) */
/* WARNING: Removing unreachable block (ram,0x06885dfc) */
/* WARNING: Removing unreachable block (ram,0x06885e04) */
/* WARNING: Removing unreachable block (ram,0x06885ed8) */
/* WARNING: Removing unreachable block (ram,0x06885edc) */
/* WARNING: Removing unreachable block (ram,0x06885efc) */
/* WARNING: Removing unreachable block (ram,0x06885f24) */
/* WARNING: Removing unreachable block (ram,0x06885f2c) */
/* WARNING: Removing unreachable block (ram,0x06885f54) */
/* WARNING: Removing unreachable block (ram,0x06885f38) */
/* WARNING: Removing unreachable block (ram,0x06885f44) */
/* WARNING: Removing unreachable block (ram,0x06885f60) */
/* WARNING: Removing unreachable block (ram,0x06885f80) */
/* WARNING: Removing unreachable block (ram,0x06885f90) */
/* WARNING: Removing unreachable block (ram,0x06885fac) */
/* WARNING: Removing unreachable block (ram,0x06885fb4) */
/* WARNING: Removing unreachable block (ram,0x06885fdc) */
/* WARNING: Removing unreachable block (ram,0x06885fc0) */
/* WARNING: Removing unreachable block (ram,0x06885fcc) */
/* WARNING: Removing unreachable block (ram,0x06885fe8) */
/* WARNING: Removing unreachable block (ram,0x06886008) */
/* WARNING: Removing unreachable block (ram,0x06886010) */
/* WARNING: Removing unreachable block (ram,0x072cde8c) */
/* WARNING: Removing unreachable block (ram,0x0688601c) */
/* WARNING: Removing unreachable block (ram,0x06886034) */
/* WARNING: Removing unreachable block (ram,0x0688603c) */
/* WARNING: Removing unreachable block (ram,0x06886064) */
/* WARNING: Removing unreachable block (ram,0x06886048) */
/* WARNING: Removing unreachable block (ram,0x06886054) */
/* WARNING: Removing unreachable block (ram,0x06886070) */
/* WARNING: Removing unreachable block (ram,0x06886090) */
/* WARNING: Removing unreachable block (ram,0x06886098) */
/* WARNING: Removing unreachable block (ram,0x068860c4) */
/* WARNING: Removing unreachable block (ram,0x068860cc) */
/* WARNING: Removing unreachable block (ram,0x068860f4) */
/* WARNING: Removing unreachable block (ram,0x068860d8) */
/* WARNING: Removing unreachable block (ram,0x068860e4) */
/* WARNING: Removing unreachable block (ram,0x06886100) */
/* WARNING: Removing unreachable block (ram,0x06886140) */
/* WARNING: Removing unreachable block (ram,0x06886160) */
/* WARNING: Removing unreachable block (ram,0x0688618c) */
/* WARNING: Removing unreachable block (ram,0x06886170) */
/* WARNING: Removing unreachable block (ram,0x068861a4) */
/* WARNING: Removing unreachable block (ram,0x068861bc) */
/* WARNING: Removing unreachable block (ram,0x068861e8) */
/* WARNING: Removing unreachable block (ram,0x068861cc) */
/* WARNING: Removing unreachable block (ram,0x06886200) */
/* WARNING: Removing unreachable block (ram,0x06886218) */
/* WARNING: Removing unreachable block (ram,0x06886244) */
/* WARNING: Removing unreachable block (ram,0x06886228) */
/* WARNING: Removing unreachable block (ram,0x0688625c) */
/* WARNING: Removing unreachable block (ram,0x06886274) */
/* WARNING: Removing unreachable block (ram,0x068862a0) */
/* WARNING: Removing unreachable block (ram,0x06886284) */
/* WARNING: Removing unreachable block (ram,0x068862b8) */
/* WARNING: Removing unreachable block (ram,0x068862bc) */
/* WARNING: Removing unreachable block (ram,0x068b91e4) */
/* WARNING: Removing unreachable block (ram,0x068b9204) */
/* WARNING: Removing unreachable block (ram,0x068b9224) */
/* WARNING: Removing unreachable block (ram,0x068b92c8) */
/* WARNING: Removing unreachable block (ram,0x068b92ec) */
/* WARNING: Removing unreachable block (ram,0x068b930c) */
/* WARNING: Removing unreachable block (ram,0x068b93b0) */
/* WARNING: Removing unreachable block (ram,0x068b93d4) */
/* WARNING: Removing unreachable block (ram,0x068b93f4) */
/* WARNING: Removing unreachable block (ram,0x068b949c) */
/* WARNING: Removing unreachable block (ram,0x068b94c4) */
/* WARNING: Removing unreachable block (ram,0x068b94e4) */
/* WARNING: Removing unreachable block (ram,0x068b958c) */
/* WARNING: Removing unreachable block (ram,0x068b95b4) */
/* WARNING: Removing unreachable block (ram,0x068b95d4) */
/* WARNING: Removing unreachable block (ram,0x068b967c) */
/* WARNING: Removing unreachable block (ram,0x068b96a4) */
/* WARNING: Removing unreachable block (ram,0x068b96c4) */
/* WARNING: Removing unreachable block (ram,0x068b976c) */
/* WARNING: Removing unreachable block (ram,0x068b9790) */
/* WARNING: Removing unreachable block (ram,0x068b97b0) */
/* WARNING: Removing unreachable block (ram,0x068b9858) */
/* WARNING: Removing unreachable block (ram,0x068b987c) */
/* WARNING: Removing unreachable block (ram,0x068b989c) */
/* WARNING: Removing unreachable block (ram,0x068b9944) */
/* WARNING: Removing unreachable block (ram,0x068b997c) */
/* WARNING: Removing unreachable block (ram,0x068b99a8) */
/* WARNING: Removing unreachable block (ram,0x068b99c0) */
/* WARNING: Removing unreachable block (ram,0x068b9a84) */
/* WARNING: Removing unreachable block (ram,0x068b9abc) */
/* WARNING: Removing unreachable block (ram,0x068b9ae8) */
/* WARNING: Removing unreachable block (ram,0x068b9b00) */
/* WARNING: Removing unreachable block (ram,0x068b9bc4) */
/* WARNING: Removing unreachable block (ram,0x068b9be8) */
/* WARNING: Removing unreachable block (ram,0x068b9c08) */
/* WARNING: Removing unreachable block (ram,0x068b9cb0) */
/* WARNING: Removing unreachable block (ram,0x068b9cd4) */
/* WARNING: Removing unreachable block (ram,0x068b9cf4) */
/* WARNING: Removing unreachable block (ram,0x068b9d9c) */
/* WARNING: Removing unreachable block (ram,0x068b9dc0) */
/* WARNING: Removing unreachable block (ram,0x068b9de0) */
/* WARNING: Removing unreachable block (ram,0x068b9e84) */
/* WARNING: Removing unreachable block (ram,0x068b9ea8) */
/* WARNING: Removing unreachable block (ram,0x068b9ec8) */
/* WARNING: Removing unreachable block (ram,0x068b9f70) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x068b9ed0) */
/* WARNING: Removing unreachable block (ram,0x068b9efc) */
/* WARNING: Removing unreachable block (ram,0x068b9f04) */
/* WARNING: Removing unreachable block (ram,0x068b9f28) */
/* WARNING: Removing unreachable block (ram,0x068b9f10) */
/* WARNING: Removing unreachable block (ram,0x068b9f1c) */
/* WARNING: Removing unreachable block (ram,0x068b9f38) */
/* WARNING: Removing unreachable block (ram,0x068b9de8) */
/* WARNING: Removing unreachable block (ram,0x068b9e14) */
/* WARNING: Removing unreachable block (ram,0x068b9e1c) */
/* WARNING: Removing unreachable block (ram,0x068b9e40) */
/* WARNING: Removing unreachable block (ram,0x068b9e28) */
/* WARNING: Removing unreachable block (ram,0x068b9e34) */
/* WARNING: Removing unreachable block (ram,0x068b9e50) */
/* WARNING: Removing unreachable block (ram,0x068b9cfc) */
/* WARNING: Removing unreachable block (ram,0x068b9d28) */
/* WARNING: Removing unreachable block (ram,0x068b9d30) */
/* WARNING: Removing unreachable block (ram,0x068b9d54) */
/* WARNING: Removing unreachable block (ram,0x068b9d3c) */
/* WARNING: Removing unreachable block (ram,0x068b9d48) */
/* WARNING: Removing unreachable block (ram,0x068b9d64) */
/* WARNING: Removing unreachable block (ram,0x068b9c10) */
/* WARNING: Removing unreachable block (ram,0x068b9c3c) */
/* WARNING: Removing unreachable block (ram,0x068b9c44) */
/* WARNING: Removing unreachable block (ram,0x068b9c68) */
/* WARNING: Removing unreachable block (ram,0x068b9c50) */
/* WARNING: Removing unreachable block (ram,0x068b9c5c) */
/* WARNING: Removing unreachable block (ram,0x068b9c78) */
/* WARNING: Removing unreachable block (ram,0x068b9b20) */
/* WARNING: Removing unreachable block (ram,0x068b9b4c) */
/* WARNING: Removing unreachable block (ram,0x068b9b54) */
/* WARNING: Removing unreachable block (ram,0x068b9b78) */
/* WARNING: Removing unreachable block (ram,0x068b9b60) */
/* WARNING: Removing unreachable block (ram,0x068b9b6c) */
/* WARNING: Removing unreachable block (ram,0x068b9b88) */
/* WARNING: Removing unreachable block (ram,0x068b99e0) */
/* WARNING: Removing unreachable block (ram,0x068b9a0c) */
/* WARNING: Removing unreachable block (ram,0x068b9a14) */
/* WARNING: Removing unreachable block (ram,0x068b9a38) */
/* WARNING: Removing unreachable block (ram,0x068b9a20) */
/* WARNING: Removing unreachable block (ram,0x068b9a2c) */
/* WARNING: Removing unreachable block (ram,0x068b9a48) */
/* WARNING: Removing unreachable block (ram,0x068b98a4) */
/* WARNING: Removing unreachable block (ram,0x068b98d0) */
/* WARNING: Removing unreachable block (ram,0x068b98d8) */
/* WARNING: Removing unreachable block (ram,0x068b98fc) */
/* WARNING: Removing unreachable block (ram,0x068b98e4) */
/* WARNING: Removing unreachable block (ram,0x068b98f0) */
/* WARNING: Removing unreachable block (ram,0x068b990c) */
/* WARNING: Removing unreachable block (ram,0x068b97b8) */
/* WARNING: Removing unreachable block (ram,0x068b97e4) */
/* WARNING: Removing unreachable block (ram,0x068b97ec) */
/* WARNING: Removing unreachable block (ram,0x068b9810) */
/* WARNING: Removing unreachable block (ram,0x068b97f8) */
/* WARNING: Removing unreachable block (ram,0x068b9804) */
/* WARNING: Removing unreachable block (ram,0x068b9820) */
/* WARNING: Removing unreachable block (ram,0x068b96cc) */
/* WARNING: Removing unreachable block (ram,0x068b96f8) */
/* WARNING: Removing unreachable block (ram,0x068b9700) */
/* WARNING: Removing unreachable block (ram,0x068b9724) */
/* WARNING: Removing unreachable block (ram,0x068b970c) */
/* WARNING: Removing unreachable block (ram,0x068b9718) */
/* WARNING: Removing unreachable block (ram,0x068b9734) */
/* WARNING: Removing unreachable block (ram,0x068b95dc) */
/* WARNING: Removing unreachable block (ram,0x068b9608) */
/* WARNING: Removing unreachable block (ram,0x068b9610) */
/* WARNING: Removing unreachable block (ram,0x068b9634) */
/* WARNING: Removing unreachable block (ram,0x068b961c) */
/* WARNING: Removing unreachable block (ram,0x068b9628) */
/* WARNING: Removing unreachable block (ram,0x068b9644) */
/* WARNING: Removing unreachable block (ram,0x068b94ec) */
/* WARNING: Removing unreachable block (ram,0x068b9518) */
/* WARNING: Removing unreachable block (ram,0x068b9520) */
/* WARNING: Removing unreachable block (ram,0x068b9544) */
/* WARNING: Removing unreachable block (ram,0x068b952c) */
/* WARNING: Removing unreachable block (ram,0x068b9538) */
/* WARNING: Removing unreachable block (ram,0x068b9554) */
/* WARNING: Removing unreachable block (ram,0x068b93fc) */
/* WARNING: Removing unreachable block (ram,0x068b9428) */
/* WARNING: Removing unreachable block (ram,0x068b9430) */
/* WARNING: Removing unreachable block (ram,0x068b9454) */
/* WARNING: Removing unreachable block (ram,0x068b943c) */
/* WARNING: Removing unreachable block (ram,0x068b9448) */
/* WARNING: Removing unreachable block (ram,0x068b9464) */
/* WARNING: Removing unreachable block (ram,0x068b9314) */
/* WARNING: Removing unreachable block (ram,0x068b9340) */
/* WARNING: Removing unreachable block (ram,0x068b9348) */
/* WARNING: Removing unreachable block (ram,0x068b936c) */
/* WARNING: Removing unreachable block (ram,0x068b9354) */
/* WARNING: Removing unreachable block (ram,0x068b9360) */
/* WARNING: Removing unreachable block (ram,0x068b937c) */
/* WARNING: Removing unreachable block (ram,0x068b922c) */
/* WARNING: Removing unreachable block (ram,0x068b9258) */
/* WARNING: Removing unreachable block (ram,0x068b9260) */
/* WARNING: Removing unreachable block (ram,0x068b9284) */
/* WARNING: Removing unreachable block (ram,0x068b926c) */
/* WARNING: Removing unreachable block (ram,0x068b9278) */
/* WARNING: Removing unreachable block (ram,0x068b9294) */

void MergeEngine_ECS_Systems_Board_SplitSystem__Split
               (long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long extraout_x1;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  auVar12._8_8_ = param_5;
  auVar12._0_8_ = param_1;
  plVar11 = (long *)0x7e28000;
  plVar7 = param_3;
  if ((bRam0000000007e28d12 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_077e71b8);
    func_0x03280a18(PTR_DAT_077e71c0);
    func_0x03280a18(PTR_DAT_077e71c8);
    func_0x03280a18(PTR_DAT_07810148);
    func_0x03280a18(PTR_DAT_07810150);
    func_0x03280a18(PTR_DAT_0777e5f8);
    func_0x03280a18(PTR_DAT_07810160);
    func_0x03280a18(PTR_DAT_07810168);
    func_0x03280a18(PTR_DAT_0776b160);
    bRam0000000007e28d12 = 1;
  }
  if (param_2 != 0) {
    plVar11 = *(long **)(param_1 + 0x58);
    uVar2 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d75b8);
    if (plVar11 != (long *)0x0) {
      plVar7 = *(long **)PTR_DAT_07810168;
      (**(code **)(*plVar11 + 0x218))(plVar11,uVar2,plVar7,1,1,*(undefined8 *)(*plVar11 + 0x220));
      plVar3 = *(long **)(param_1 + 0x58);
      if (plVar3 != (long *)0x0) {
        plVar7 = *(long **)PTR_DAT_07810160;
        (**(code **)(*plVar3 + 0x218))(plVar3,param_3,plVar7,1,1,*(undefined8 *)(*plVar3 + 0x220));
        puVar1 = PTR_DAT_0777a498;
        plVar3 = *(long **)(param_1 + 0x40);
        plVar11 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          lVar8 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x14) * 0x10 + 0x138);
                goto LAB_06885d6c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_0777a498,0x14);
LAB_06885d6c:
          plVar7 = (long *)puVar4[1];
          uVar2 = (*(code *)*puVar4)(plVar3,param_3);
          plVar3 = *(long **)(param_1 + 0x40);
          plVar11 = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            lVar8 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x10) * 0x10 + 0x138);
                  goto LAB_06885dd8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar1,0x10);
LAB_06885dd8:
            plVar7 = (long *)(*(code *)*puVar4)(plVar3,uVar2,puVar4[1]);
            uVar2 = 0x6885dfc;
            plVar11 = plVar7;
            goto SUB_068862e8;
          }
        }
      }
    }
  }
  uVar2 = 0x68862e8;
  auVar12 = func_0x03280cac();
SUB_068862e8:
  puVar1 = PTR_DAT_0777e5d0;
  uStack_90 = uVar2;
  uStack_88 = param_5;
  lStack_80 = param_2;
  plStack_78 = plVar11;
  plStack_70 = param_3;
  lStack_68 = param_1;
  if ((bRam0000000007e28d16 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e28d16 = 1;
  }
  uStack_98 = 0;
  func_0x0437ba9c(&uStack_98,0x100,*(undefined8 *)puVar1);
  lVar8 = 0;
  lVar5 = func_0x06a13bc8(auVar12._8_8_,uStack_98,0,0,0);
  plVar11 = *(long **)(auVar12._0_8_ + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777e5b8) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_068863dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777e5b8,0);
LAB_068863dc:
    lVar6 = (*(code *)*puVar4)(plVar11,plVar7,lVar5,puVar4[1]);
    plVar7 = *(long **)(auVar12._0_8_ + 0x10);
    lVar8 = lVar5;
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777e5c0) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_06886454;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777e5c0,5);
LAB_06886454:
      lVar8 = puVar4[1];
      (*(code *)*puVar4)(plVar7,lVar6);
      if (lVar6 != 0) {
        func_0x03d20d84(lVar6,*(undefined8 *)PTR_DAT_0777a940);
        return;
      }
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e28d17 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    bRam0000000007e28d17 = 1;
  }
  puVar1 = PTR_DAT_0777bf98;
  if (extraout_x1 != 0) {
    lVar5 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_0777bf98);
    if (((lVar8 != 0) && (lVar8 = func_0x03ced81c(lVar8,*(undefined8 *)puVar1), lVar8 != 0)) &&
       (lVar5 != 0)) {
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar8 + 0x50);
      return;
    }
  }
  func_0x03280cac();
  return;
}

