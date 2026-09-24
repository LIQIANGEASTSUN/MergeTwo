/* Ghidra 12.1.2 native pseudocode; RVA 0x665AE08; MergeEngine.ECS.Systems.Board.BoardIdleHintSystem.AnimationCompleted; status ok */


/* WARNING: Possible PIC construction at 0x069aa5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x069aa5cc) */
/* WARNING: Removing unreachable block (ram,0x069aa5d0) */
/* WARNING: Removing unreachable block (ram,0x069aa644) */
/* WARNING: Removing unreachable block (ram,0x069aa650) */
/* WARNING: Removing unreachable block (ram,0x069aa690) */
/* WARNING: Removing unreachable block (ram,0x069aa65c) */

void MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__AnimationCompleted
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000007e28062 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807710);
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_07771708);
    func_0x03280a18(PTR_DAT_0777da58);
    bRam0000000007e28062 = 1;
  }
  if (param_2 != 0) {
    lVar4 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d7588);
    lVar6 = *(long *)(param_1 + 0x88);
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x28) != '\0') {
        MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__FinishHinting(param_1);
        lVar6 = *(long *)(param_1 + 0x88);
        if (lVar6 == 0) goto LAB_0675af44;
      }
      puVar1 = PTR_DAT_0777bf98;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x2a) = 1;
      uVar5 = func_0x03ced81c(param_2,*(undefined8 *)puVar1);
      MergeEngine_ECS_Systems_Board_BoardIdleHintSystem__SetItemsAsHinting(param_1,uVar5,0);
      puVar1 = PTR_DAT_07771708;
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x66) = 1;
        puVar3 = PTR_DAT_07807710;
        puVar2 = PTR_DAT_0777da58;
        uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x069aa464(uVar5,param_1,*(undefined8 *)puVar3,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        puVar1 = PTR_DAT_07823e30;
        if ((bRam0000000007e29509 & 1) == 0) {
          func_0x03280a18(0x3f800000,PTR_DAT_0777da58,1,0);
          func_0x03280a18(PTR_DAT_07823e38);
          func_0x03280a18(PTR_DAT_0776bc20);
          func_0x03280a18(PTR_DAT_07823e40);
          func_0x03280a18(PTR_DAT_07823e30);
          bRam0000000007e29509 = 1;
        }
        func_0x03280ca0(*(undefined8 *)puVar1);
        return;
      }
    }
  }
LAB_0675af44:
  func_0x03280cac();
  return;
}

