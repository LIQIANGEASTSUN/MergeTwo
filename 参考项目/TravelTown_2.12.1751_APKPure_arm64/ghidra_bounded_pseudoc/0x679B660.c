/* Ghidra 12.1.2 bounded pseudocode; RVA 0x679B660; bound 100 bytes; MergeEngine.ECS.Systems.Items.Producers.ProduceSystem.OnWillProcessComponents; status ok */


undefined8
MergeEngine_ECS_Systems_Items_Producers_ProduceSystem__OnWillProcessComponents
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x30;
  
  puVar1 = PTR_DAT_078108b8;
  if ((bRam0000000007e28db4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078108b8);
    bRam0000000007e28db4 = 1;
  }
  uVar6 = func_0x03bf6e54(param_1,param_2,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_078108b0;
  puVar2 = PTR_DAT_078108a8;
  puVar1 = PTR_DAT_077f3c08;
  if ((bRam0000000007e28db3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078108b0);
    func_0x03280a18(PTR_DAT_077f3c08);
    func_0x03280a18(PTR_DAT_078108a8);
    bRam0000000007e28db3 = 1;
  }
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x05356664(uVar5,param_1,*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar3;
  lVar8 = *(long *)(lVar7 + 0x38);
  if (lVar8 == 0) {
    func_0x03256878(lVar7);
    lVar8 = *(long *)(lVar7 + 0x38);
  }
  if ((*(byte *)(*(long *)(lVar8 + 0x10) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar4 = func_0x03280ca0();
  func_0x04438914(uVar4,uVar6,uVar5,0,0,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18),in_x6,in_x7,
                  unaff_x30,unaff_x21,unaff_x20,unaff_x19);
  return uVar4;
}

