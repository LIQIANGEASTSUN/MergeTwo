/* Ghidra 12.1.2 native pseudocode; RVA 0x6660E80; MergeEngine.ECS.Systems.Board.BoardItemConsumerSystem.SlideItemOut; status ok */

/* WARNING: Possible PIC construction at 0x067610bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067610c0) */
/* WARNING: Removing unreachable block (ram,0x067610c4) */
/* WARNING: Removing unreachable block (ram,0x06761128) */
/* WARNING: Removing unreachable block (ram,0x06761134) */
/* WARNING: Removing unreachable block (ram,0x06761248) */
/* WARNING: Removing unreachable block (ram,0x06761250) */
/* WARNING: Removing unreachable block (ram,0x06761258) */
/* WARNING: Removing unreachable block (ram,0x06761154) */
/* WARNING: Removing unreachable block (ram,0x0676115c) */
/* WARNING: Removing unreachable block (ram,0x067611a0) */
/* WARNING: Removing unreachable block (ram,0x0676121c) */
/* WARNING: Removing unreachable block (ram,0x067611b0) */
/* WARNING: Removing unreachable block (ram,0x067611b8) */
/* WARNING: Removing unreachable block (ram,0x067611e8) */
/* WARNING: Removing unreachable block (ram,0x0676126c) */
/* WARNING: Removing unreachable block (ram,0x06761270) */
/* WARNING: Removing unreachable block (ram,0x06761274) */
/* WARNING: Removing unreachable block (ram,0x06761278) */
/* WARNING: Removing unreachable block (ram,0x06761298) */
/* WARNING: Removing unreachable block (ram,0x067612a4) */
/* WARNING: Removing unreachable block (ram,0x06761228) */
/* WARNING: Removing unreachable block (ram,0x067612c4) */
/* WARNING: Removing unreachable block (ram,0x067612cc) */
/* WARNING: Removing unreachable block (ram,0x067612d8) */
/* WARNING: Removing unreachable block (ram,0x067612e8) */
/* WARNING: Removing unreachable block (ram,0x067612f0) */
/* WARNING: Removing unreachable block (ram,0x06761204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__SlideItemOut
               (undefined8 param_1,undefined8 param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  
  if ((bRam0000000007e28095 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_07807ae8);
    bRam0000000007e28095 = 1;
  }
  uVar2 = func_0x06a05088(0);
  if ((param_5 != 0) && (*(long *)(param_4 + 0x40) != 0)) {
    fVar8 = (float)func_0x067b64d8(*(undefined4 *)(*(long *)(param_4 + 0x40) + 0xe4),uVar2,
                                   *(undefined8 *)(param_5 + 0x30),0);
    plVar3 = *(long **)(param_4 + 0x40);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar2 = *(undefined8 *)(param_5 + 0x30);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        fVar8 = fVar8 + _UNK_017be8bc;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077cc678) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x1c) * 0x10 + 0x138);
              goto LAB_06760f8c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_077cc678,0x1c);
LAB_06760f8c:
        (*(code *)*puVar4)(param_1,param_2,fVar8 * param_3,plVar3,uVar2,param_7,7,puVar4[1]);
        plVar3 = *(long **)(param_4 + 0x40);
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06760ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x218))
                    (plVar3,param_5,*(undefined8 *)PTR_DAT_07807ae8,1,1,
                     *(undefined8 *)(*plVar3 + 0x220));
          return;
        }
      }
    }
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_07807af0;
  if ((bRam0000000007e28094 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_077f1be0);
    func_0x03280a18(PTR_DAT_077f1be8);
    func_0x03280a18(PTR_DAT_07807638);
    func_0x03280a18(PTR_DAT_07807640);
    func_0x03280a18(PTR_DAT_07807648);
    func_0x03280a18(PTR_DAT_07807650);
    func_0x03280a18(PTR_DAT_0777e4f0);
    func_0x03280a18(PTR_DAT_07807af0);
    bRam0000000007e28094 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

