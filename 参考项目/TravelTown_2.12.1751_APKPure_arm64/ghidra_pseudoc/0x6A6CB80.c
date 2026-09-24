/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6CB80; ItemDiscoverySystem.DiscoverableItems.GetMatchMethod; status ok */


undefined8 ItemDiscoverySystem_DiscoverableItems__GetMatchMethod(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_07831020;
  if ((bRam0000000007e2a6d4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831020);
    bRam0000000007e2a6d4 = 1;
  }
  lVar3 = *(long *)puVar1;
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 == 0) {
    func_0x03256878(lVar3);
    lVar4 = *(long *)(lVar3 + 0x38);
  }
  if ((*(byte *)(*(long *)(lVar4 + 8) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  uVar2 = func_0x03280ca0();
  func_0x042db6cc(uVar2,0,**(undefined8 **)(lVar3 + 0x38),(*(undefined8 **)(lVar3 + 0x38))[2]);
  return uVar2;
}

