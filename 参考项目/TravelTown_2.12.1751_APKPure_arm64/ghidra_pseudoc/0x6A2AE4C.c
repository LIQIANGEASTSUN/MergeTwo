/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2AE4C; MergeEngine.Configuration.Definitions.Reward.Count; status ok */


int MergeEngine_Configuration_Definitions_Reward__Count(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x19;
  int iVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar11;
  undefined *unaff_x24;
  undefined *puVar12;
  undefined8 unaff_x30;
  undefined1 auVar13 [12];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e2a468 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_07773118);
      func_0x03280a18(PTR_DAT_07773120);
      func_0x03280a18(PTR_DAT_0774e8e0);
      bRam0000000007e2a468 = 1;
    }
    if (param_2 == (long *)0x0) {
      func_0x03280cac();
      plVar4 = (long *)0x0;
    }
    else {
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07773118) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b2af00;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07773118,0);
LAB_06b2af00:
      unaff_x22 = (long *)PTR_DAT_0774e8c8;
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      puVar12 = PTR_DAT_07773120;
      puVar11 = PTR_DAT_0774e8e0;
      if (plVar4 != (long *)0x0) {
        iVar10 = 0;
        do {
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar11) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06b2af7c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar11,0);
LAB_06b2af7c:
          uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar8 & 1) == 0) {
            param_1 = 0;
            goto LAB_06b2affc;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar12) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06b2afd8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar12,0);
LAB_06b2afd8:
          uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          iVar2 = MergeEngine_Configuration_Definitions_Reward__Count(param_1,uVar5);
          iVar10 = iVar2 + iVar10;
        } while( true );
      }
    }
    func_0x03280cac();
    puVar11 = unaff_x23;
    puVar12 = unaff_x24;
    while( true ) {
      auVar13 = func_0x03280ca4(param_1);
      iVar10 = 0;
      if (auVar13._8_4_ != 1) break;
      plVar6 = (long *)func_0x072ce910();
      param_1 = *plVar6;
      func_0x072ce920();
LAB_06b2affc:
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b2b04c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar4,*unaff_x22,0);
LAB_06b2b04c:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
      }
      if (param_1 == 0) {
        return iVar10;
      }
    }
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b2b10c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar4,*unaff_x22,0);
LAB_06b2b10c:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    func_0x03365958(auVar13._0_8_);
    func_0x03280ca4(0);
    param_1 = func_0x02f09514();
    puVar1 = PTR_DAT_077730b8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x6b2b130;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(long *)((long)register0x00000008 + -0x50) = auVar13._0_8_;
    *(long **)((long)register0x00000008 + -0x48) = plVar4;
    if ((bRam0000000007e2a445 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077730b8);
      bRam0000000007e2a445 = 1;
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar1;
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    param_2 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x210);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x23 = puVar11;
    unaff_x24 = puVar12;
  } while( true );
}

