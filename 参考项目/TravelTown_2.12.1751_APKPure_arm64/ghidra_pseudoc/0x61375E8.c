/* Ghidra 12.1.2 native pseudocode; RVA 0x61375E8; MergeEngine.Model.Configuration.BubbledItemsConfigurationModel.GetCoreBoardBubbledItemsConfig; status ok */


long MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__GetCoreBoardBubbledItemsConfig
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x30;
  undefined8 uVar8;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    unaff_x20 = 0x7e24000;
    if ((bRam0000000007e2455e & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a750);
      func_0x03280a18(PTR_DAT_077dace0);
      func_0x03280a18(PTR_DAT_077dace8);
      bRam0000000007e2455e = 1;
    }
    puVar2 = PTR_DAT_077dace8;
    puVar1 = PTR_DAT_077dace0;
    plVar7 = *(long **)(param_1 + 0x30);
    unaff_x19 = 0;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a750) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_0623769c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a750,4);
LAB_0623769c:
      unaff_x20 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      func_0x0727eb94(unaff_x20,*(undefined8 *)puVar2,0);
      unaff_x19 = func_0x03280ca0(*(undefined8 *)puVar1);
      func_0x06a05468(unaff_x19,0);
      unaff_x21 = puVar1;
      if (unaff_x20 == 0) {
        if (unaff_x19 != 0) {
          *(undefined8 *)(unaff_x19 + 0x10) = 0x300000003;
          *(undefined4 *)(unaff_x19 + 0x18) = 10;
          return unaff_x19;
        }
      }
      else if (unaff_x19 != 0) {
        uVar8 = NEON_rev64(*(undefined8 *)(unaff_x20 + 0x10),4);
        *(undefined8 *)(unaff_x19 + 0x10) = uVar8;
        *(undefined4 *)(unaff_x19 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
        *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x40);
        func_0x032809c4();
        *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x48);
        func_0x032809c4();
        return unaff_x19;
      }
    }
    unaff_x30 = 0x6237734;
    param_1 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  } while( true );
}

