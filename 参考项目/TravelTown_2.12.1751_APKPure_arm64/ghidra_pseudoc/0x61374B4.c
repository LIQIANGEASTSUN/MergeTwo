/* Ghidra 12.1.2 native pseudocode; RVA 0x61374B4; MergeEngine.Model.Configuration.BubbledItemsConfigurationModel.GetLiveOpsBubbledItemsConfig; status ok */


long * MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__GetLiveOpsBubbledItemsConfig
                 (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined *unaff_x21;
  code *pcVar11;
  long alStack_40 [4];
  
  lVar10 = 0x7e24000;
  if ((bRam0000000007e2455f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a608);
    func_0x03280a18(PTR_DAT_077d9fc0);
    func_0x03280a18(PTR_DAT_077bd3f0);
    bRam0000000007e2455f = 1;
  }
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077bd3f0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_06237558;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077bd3f0,3);
LAB_06237558:
    lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
      plVar9 = *(long **)(*(long *)(lVar5 + 0x20) + 0x10);
      plVar8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077d9fc0) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
              goto LAB_062375d0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077d9fc0,0xd);
LAB_062375d0:
                    /* WARNING: Could not recover jumptable at 0x062375e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
        return plVar8;
      }
    }
  }
  pcVar11 = 
  MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__GetCoreBoardBubbledItemsConfig;
  lVar5 = func_0x03280cac();
  puVar3 = &stack0xffffffffffffffe0;
  do {
    *(code **)(puVar3 + -0x20) = pcVar11;
    *(undefined **)(puVar3 + -0x18) = unaff_x21;
    *(long *)(puVar3 + -0x10) = lVar10;
    *(long **)(puVar3 + -8) = plVar8;
    lVar10 = 0x7e24000;
    if ((bRam0000000007e2455e & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a750);
      func_0x03280a18(PTR_DAT_077dace0);
      func_0x03280a18(PTR_DAT_077dace8);
      bRam0000000007e2455e = 1;
    }
    puVar2 = PTR_DAT_077dace8;
    puVar1 = PTR_DAT_077dace0;
    plVar9 = *(long **)(lVar5 + 0x30);
    plVar8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a750) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_0623769c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a750,4);
LAB_0623769c:
      lVar10 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      func_0x0727eb94(lVar10,*(undefined8 *)puVar2,0);
      plVar8 = (long *)func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x06a05468(plVar8,0);
      unaff_x21 = puVar1;
      if (lVar10 == 0) {
        if (plVar8 != (long *)0x0) {
          plVar8[2] = 0x300000003;
          *(undefined4 *)(plVar8 + 3) = 10;
          return plVar8;
        }
      }
      else if (plVar8 != (long *)0x0) {
        lVar5 = NEON_rev64(*(undefined8 *)(lVar10 + 0x10),4);
        plVar8[2] = lVar5;
        *(undefined4 *)(plVar8 + 3) = *(undefined4 *)(lVar10 + 0x18);
        plVar8[4] = *(long *)(lVar10 + 0x40);
        func_0x032809c4();
        plVar8[5] = *(long *)(lVar10 + 0x48);
        func_0x032809c4();
        return plVar8;
      }
    }
    pcVar11 = (code *)0x6237734;
    lVar5 = func_0x03280cac();
    puVar3 = puVar3 + -0x20;
  } while( true );
}

